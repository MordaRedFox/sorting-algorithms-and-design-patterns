#pragma once
#include <memory>
#include "IStrategy.h"

/// <summary>
/// Контекст, использующий стратегию. Умеет менять стратегию и выполнять ее
/// </summary>
class StrategyContext
{
public:
    StrategyContext() = default;
    explicit StrategyContext(std::shared_ptr<IStrategy> strategy);
    virtual ~StrategyContext() = default;
    StrategyContext(const StrategyContext&) = delete;
    StrategyContext& operator=(const StrategyContext&) = delete;
    StrategyContext(StrategyContext&&) = default;
    StrategyContext& operator=(StrategyContext&&) = default;

    /// <summary>
    /// Установить новую стратегию
    /// </summary>
    void setStrategy(std::shared_ptr<IStrategy> strategy);

    /// <summary>
    /// Выполнить текущую стратегию
    /// </summary>
    void performAction() const;

    /// <summary>
    /// Вывести информацию о текущей стратегии
    /// </summary>
    void printStrategyInfo() const;

private:
    std::shared_ptr<IStrategy> strategy;
};
