#include <iostream>
#include <memory>
#include <algorithm>
#include <string>
#include "Character.h"
#include "IObserver.h"

Character::Character() : health(100), level(1) {}

void Character::attach(std::shared_ptr<IObserver> observer)
{
    observers.erase(std::remove_if(observers.begin(), observers.end(),
        [](const std::weak_ptr<IObserver>& wptr) { return wptr.expired(); }
        ), observers.end()
    );
    for (const auto& wptr : observers)
        if (wptr.lock() == observer) return;
    observers.push_back(observer);
}

void Character::detach(std::shared_ptr<IObserver> observer)
{
    observers.erase(std::remove_if(observers.begin(), observers.end(),
        [](const std::weak_ptr<IObserver>& wptr) { return wptr.expired(); }
        ), observers.end()
    );
    auto it{ std::remove_if(observers.begin(), observers.end(),
        [&observer](const std::weak_ptr<IObserver>& wptr)
        { return wptr.lock() == observer; })
    };
    observers.erase(it, observers.end());
}

void Character::notify(const std::string& event, int value)
{
    observers.erase(std::remove_if(observers.begin(), observers.end(),
        [](const std::weak_ptr<IObserver>& wptr) { return wptr.expired(); }
        ), observers.end()
    );
    auto snapshot{ observers };
    for (const auto& wptr : snapshot)
        if (auto observer = wptr.lock()) observer->update(event, value);
}

void Character::setHealth(int health)
{
    this->health = health;
    notify("health", health);
}

void Character::setLevel(int level)
{
    this->level = level;
    notify("level", level);
}

void Character::printState() const
{
    std::cout << "Персонаж: здоровье = " << health << ", уровень = " << level
        << std::endl;
}
