#include <iostream>
#include <memory>
#include <clocale>
#include "Character.h"
#include "HealthObserver.h"
#include "LevelObserver.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Наблюдатель\""
        << std::endl << std::endl;
    // Создание персонажа, наблюдателей и подписка наблюдателей на уведомления
    auto character{ std::make_shared<Character>() };
    auto healthObs{ std::make_shared<HealthObserver>() };
    auto levelObs{ std::make_shared<LevelObserver>() };
    character->attach(healthObs);
    character->attach(levelObs);
    std::cout << "Начальное состояние персонажа:" << std::endl;
    character->printState();
    std::cout << std::endl << "Изменение здоровья:" << std::endl;
    character->setHealth(80);
    std::cout << std::endl << "Изменение уровня:" << std::endl;
    character->setLevel(2);
    std::cout << std::endl << "Финальное состояние персонажа:" << std::endl;
    character->printState();
    return 0;
}
