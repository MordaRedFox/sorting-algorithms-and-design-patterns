#pragma once
#include <string>

class StateContext;

/// <summary>
/// Интерфейс состояния, определяющий поведение, делегируемое контекстом
/// </summary>
class IState
{
public:
    IState() = default;
    virtual ~IState() = default;
    IState(const IState&) = default;
    IState& operator=(const IState&) = default;
    IState(IState&&) = default;
    IState& operator=(IState&&) = default;

    /// <summary>
    /// Основной метод, вызываемый контекстом для выполнения действия,
    /// характерного для текущего состояния
    /// </summary>
    virtual void handle(class StateContext& context) = 0;

    /// <summary>
    /// Возвращает строковое название состояния
    /// </summary>
    virtual std::string getName() const = 0;
};
