#include <iostream>
#include <memory>
#include "IStrategy.h"
#include "StrategyContext.h"

StrategyContext::StrategyContext(std::shared_ptr<IStrategy> strategy)
    : strategy(strategy) {}

void StrategyContext::setStrategy(std::shared_ptr<IStrategy> strategy)
{
    this->strategy = strategy;
}

void StrategyContext::performAction() const
{
    if (strategy)
        strategy->execute();
    else
        std::cout << "[StrategyContext] Стратегия не установлена!" << std::endl;
}

void StrategyContext::printStrategyInfo() const
{
    if (strategy)
        std::cout << "Текущая стратегия: " << strategy->getName() << std::endl;
    else
        std::cout << "Стратегия не установлена!" << std::endl;
}
