#pragma once
#include <string>

/// <summary>
/// Интерфейс стратегии, определяющий метод выполнения действия
/// </summary>
class IStrategy
{
public:
    IStrategy() = default;
    virtual ~IStrategy() = default;
    IStrategy(const IStrategy&) = delete;
    IStrategy& operator=(const IStrategy&) = delete;
    IStrategy(IStrategy&&) = default;
    IStrategy& operator=(IStrategy&&) = default;

    /// <summary>
    /// Выполнить стратегию
    /// </summary>
    virtual void execute() const = 0;

    /// <summary>
    /// Возвращает имя стратегии
    /// </summary>
    virtual std::string getName() const = 0;
};
