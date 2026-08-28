#include <iostream>
#include <stdexcept>
#include <memory>
#include "GameCharacter.h"
#include "IMemento.h"

GameCharacter::GameCharacter() 
    : health(100), positionX(0), positionY(0), level(1) {}

void GameCharacter::printState() const
{
    std::cout << "Игровой персонаж: здоровье = " << health << ", позиция = ("
        << positionX << "," << positionY << "), уровень = " << level
        << std::endl;
}

std::shared_ptr<IMemento> GameCharacter::createMemento() const
{
    return std::make_shared<Memento>(health, positionX, positionY, level);
}

void GameCharacter::restoreFromMemento(std::shared_ptr<IMemento> memento)
{
    auto mem{ std::dynamic_pointer_cast<Memento>(memento) };
    if (!mem) throw std::runtime_error("Неверный тип хранителя");
    health = mem->getHealth();
    positionX = mem->getPositionX();
    positionY = mem->getPositionY();
    level = mem->getLevel();
}

void GameCharacter::setHealth(int health)
{
    this->health = health;
}

void GameCharacter::setPositionX(int positionX)
{
    this->positionX = positionX;
}

void GameCharacter::setPositionY(int positionY)
{
    this->positionY = positionY;
}

void GameCharacter::setLevel(int level)
{
    this->level = level;
}

GameCharacter::Memento::Memento(int health, int positionX, int positionY, int level)
    : health(health), positionX(positionX), positionY(positionY), level(level) {}

int GameCharacter::Memento::getHealth() const
{
    return health;
}

int GameCharacter::Memento::getPositionX() const
{
    return positionX;
}

int GameCharacter::Memento::getPositionY() const
{
    return positionY;
}

int GameCharacter::Memento::getLevel() const
{
    return level;
}
