#pragma once
#include <string>
#include "IStrategy.h"

/// <summary>
/// Стратегия атаки с дистанции (лук)
/// </summary>
class RangedStrategy : public IStrategy
{
public:
    RangedStrategy() = default;
    virtual ~RangedStrategy() = default;
    RangedStrategy(const RangedStrategy&) = default;
    RangedStrategy& operator=(const RangedStrategy&) = default;
    RangedStrategy(RangedStrategy&&) = default;
    RangedStrategy& operator=(RangedStrategy&&) = default;

    /// <summary>
    /// Выполнить стратегию
    /// </summary>
    void execute() const override final;

    /// <summary>
    /// Возвращает имя стратегии
    /// </summary>
    std::string getName() const override final;
};
