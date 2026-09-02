#include <iostream>
#include <memory>
#include <clocale>
#include "StateContext.h"
#include "CombatState.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Состояние\""
        << std::endl << std::endl;
    auto context{ std::make_shared<StateContext>() };
    context->printState();
    std::cout << std::endl << "Выполнение действия в обычном состоянии:"
        << std::endl;
    context->request();
    std::cout << std::endl << "Смена состояния на боевое:" << std::endl;
    context->setState(std::make_shared<CombatState>());
    context->printState();
    std::cout << std::endl << "Выполнение действия в боевом состоянии:"
        << std::endl;
    context->request();
    return 0;
}
