#include <iostream>
#include <memory>
#include <clocale>
#include "EnemyFactory.h"
#include "IEnemy.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Приспособленец\" (Flyweight)"
        << std::endl << std::endl;
    EnemyFactory factory;
    // Создание нескольких врагов через фабрику
    auto skeleton1{ factory.getEnemy("Skeleton") };
    auto skeleton2{ factory.getEnemy("Skeleton") };
    auto orc1{ factory.getEnemy("Orc") };
    auto orc2{ factory.getEnemy("Orc") };
    // Проверка того, что объекты разделяются (указатели равны)
    std::cout << "skeleton1 и skeleton2 "
        << (skeleton1 == skeleton2 ? "указывают на один объект" : "указывают на разные объекты")
        << std::endl;
    std::cout << "orc1 и orc2 "
        << (orc1 == orc2 ? "указывают на один объект" : "указывают на разные объекты")
        << std::endl << std::endl;
    // Использование методов с внешним состоянием
    skeleton1->render(10, 20);
    skeleton2->render(30, 40);
    orc1->render(5, 5);
    orc2->render(15, 25);
    return 0;
}
