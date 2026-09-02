#pragma once
#include <memory>
#include "IState.h"

/// <summary>
/// Контекст, управляющий текущим состоянием и делегирующий ему действия
/// </summary>
class StateContext
{
public:
    StateContext();
    virtual ~StateContext() = default;
    StateContext(const StateContext&) = delete;
    StateContext& operator=(const StateContext&) = delete;
    StateContext(StateContext&&) = default;
    StateContext& operator=(StateContext&&) = default;

    /// <summary>
    /// Установить новое состояние
    /// </summary>
    void setState(std::shared_ptr<IState> newState);

    /// <summary>
    /// Выполнить действие, делегируемое текущему состоянию
    /// </summary>
    void request();

    /// <summary>
    /// Вывести текущее состояние в консоль
    /// </summary>
    void printState() const;

private:
    std::shared_ptr<IState> currentState;
};
