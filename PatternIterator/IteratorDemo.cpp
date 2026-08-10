#include <iostream>
#include <memory>
#include <clocale>
#include "VectorCollection.h"
#include "ListCollection.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Итератор\"" << std::endl
        << std::endl;
    // Создание векторной коллекции
    auto vecCollection{ std::make_shared<VectorCollection<int>>() };
    vecCollection->add(1);
    vecCollection->add(2);
    vecCollection->add(3);
    vecCollection->add(4);
    vecCollection->add(5);
    std::cout << "Векторная коллекция: ";
    auto itVector{ vecCollection->createIterator() };
    for (itVector->first(); !itVector->isDone(); itVector->next())
        std::cout << itVector->currentItem() << " ";
    std::cout << std::endl;
    std::cout << "Векторная коллекция (обратный порядок): ";
    auto ritVector{ vecCollection->createReverseIterator() };
    for (ritVector->first(); !ritVector->isDone(); ritVector->next())
        std::cout << ritVector->currentItem() << " ";
    std::cout << std::endl << std::endl;
    // Создание списочной коллекции
    auto listCollection{ std::make_shared<ListCollection<int>>() };
    listCollection->add(10);
    listCollection->add(20);
    listCollection->add(30);
    listCollection->add(40);
    listCollection->add(50);
    std::cout << "Списочная коллекция: ";
    auto itList{ listCollection->createIterator() };
    for (itList->first(); !itList->isDone(); itList->next())
        std::cout << itList->currentItem() << " ";
    std::cout << std::endl;
    std::cout << "Списочная коллекция (обратный порядок): ";
    auto ritList{ listCollection->createReverseIterator() };
    for (ritList->first(); !ritList->isDone(); ritList->next())
        std::cout << ritList->currentItem() << " ";
    std::cout << std::endl;
    return 0;
}
