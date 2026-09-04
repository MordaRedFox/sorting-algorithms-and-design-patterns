#include <iostream>
#include <memory>
#include <clocale>
#include "StrategyContext.h"
#include "MeleeStrategy.h"
#include "RangedStrategy.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Стратегия\""
        << std::endl << std::endl;
    auto melee{ std::make_shared<MeleeStrategy>() };
    auto context{ std::make_shared<StrategyContext>(melee) };
    std::cout << "Начальная стратегия:" << std::endl;
    context->printStrategyInfo();
    std::cout << std::endl << "Выполнение действия:" << std::endl;
    context->performAction();
    std::cout << std::endl << "Смена стратегии на дальний бой:" << std::endl;
    auto ranged{ std::make_shared<RangedStrategy>() };
    context->setStrategy(ranged);
    context->printStrategyInfo();
    context->performAction();
    std::cout << std::endl << "Удаление стратегии:" << std::endl;
    context->setStrategy(nullptr);
    context->printStrategyInfo();
    context->performAction();
    return 0;
}
