#pragma once
#include <string>
#include "IState.h"
#include "StateContext.h"

/// <summary>
/// Состояние персонажа в обычном режиме: слабая атака, высокая скорость
/// </summary>
class NormalState : public IState
{
public:
    NormalState() = default;
    virtual ~NormalState() = default;
    NormalState(const NormalState&) = default;
    NormalState& operator=(const NormalState&) = default;
    NormalState(NormalState&&) = default;
    NormalState& operator=(NormalState&&) = default;

    /// <summary>
    /// Основной метод, вызываемый контекстом для выполнения действия,
    /// характерного для текущего состояния
    /// </summary>
    void handle(class StateContext& context) override;

    /// <summary>
    /// Возвращает строковое название состояния
    /// </summary>
    std::string getName() const override;
};
