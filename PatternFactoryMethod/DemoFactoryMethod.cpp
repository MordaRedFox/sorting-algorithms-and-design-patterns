#include <iostream>
#include <memory>
#include <windows.h>
#include <clocale>
#include "SwordCreator.h"
#include "GoldenSwordCreator.h"
#include "IronSwordCreator.h"

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация фабричного метода" << std::endl << std::endl;
    // Использование золотого меча
    std::unique_ptr<SwordCreator> creator1{ std::make_unique<GoldenSwordCreator>() };
    creator1->createAndUseSword();
    // Использование железного меча
    std::unique_ptr<SwordCreator> creator2{ std::make_unique<IronSwordCreator>() };
    creator2->createAndUseSword();
    // Можно также создавать напрямую без полиморфного указателя
    GoldenSwordCreator goldCreator;
    goldCreator.createAndUseSword();
    IronSwordCreator ironCreator;
    ironCreator.createAndUseSword();
    return 0;
}
