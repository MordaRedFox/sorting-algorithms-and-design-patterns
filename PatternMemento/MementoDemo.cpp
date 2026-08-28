#include <iostream>
#include <memory>
#include <clocale>
#include "GameCharacter.h"
#include "GameHistory.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Хранитель\""
        << std::endl << std::endl;
    auto character{ std::make_shared<GameCharacter>() };
    auto history{ std::make_shared<GameHistory>() };
    std::cout << "Начальное состояние:" << std::endl;
    character->printState();
    // Сохранение состояния №1
    history->pushMemento(character->createMemento());
    // Изменение состояния №1
    character->setHealth(80);
    character->setPositionX(10);
    character->setPositionY(5);
    character->setLevel(2);
    std::cout << std::endl << "После первых изменений:" << std::endl;
    character->printState();
    // Сохранение состояния №2
    history->pushMemento(character->createMemento());
    // Изменение состояния №2
    character->setHealth(50);
    character->setPositionX(20);
    character->setPositionY(15);
    character->setLevel(3);
    std::cout << std::endl << "После вторых изменений:" << std::endl;
    character->printState();
    // Восстановление последнего сохраненного состояния (№2)
    std::cout << std::endl << "Восстанавливаем последнее сохраненное состояние:"
        << std::endl;
    auto memento{ history->popMemento() };
    character->restoreFromMemento(memento);
    character->printState();
    // Восстановление последнего сохраненного состояния (№1)
    std::cout << std::endl << "Восстанавливаем последнее сохраненное состояние:"
        << std::endl;
    memento = history->popMemento();
    character->restoreFromMemento(memento);
    character->printState();
    return 0;
}
