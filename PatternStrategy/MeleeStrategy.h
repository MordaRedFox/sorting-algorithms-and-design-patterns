#pragma once
#include <string>
#include "IStrategy.h"

/// <summary>
/// Стратегия атаки в ближнем бою
/// </summary>
class MeleeStrategy : public IStrategy
{
public:
    MeleeStrategy() = default;
    virtual ~MeleeStrategy() = default;
    MeleeStrategy(const MeleeStrategy&) = default;
    MeleeStrategy& operator=(const MeleeStrategy&) = default;
    MeleeStrategy(MeleeStrategy&&) = default;
    MeleeStrategy& operator=(MeleeStrategy&&) = default;

    /// <summary>
    /// Выполнить стратегию
    /// </summary>
    void execute() const override final;

    /// <summary>
    /// Возвращает имя стратегии
    /// </summary>
    std::string getName() const override final;
};
