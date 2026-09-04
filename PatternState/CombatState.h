#pragma once
#include <string>
#include "IState.h"
#include "StateContext.h"

/// <summary>
/// Состояние персонажа в боевом режиме: сильная атака, низкая скорость
/// </summary>
class CombatState : public IState
{
public:
    CombatState() = default;
    virtual ~CombatState() = default;
    CombatState(const CombatState&) = default;
    CombatState& operator=(const CombatState&) = default;
    CombatState(CombatState&&) = default;
    CombatState& operator=(CombatState&&) = default;

    /// <summary>
    /// Основной метод, вызываемый контекстом для выполнения действия,
    /// характерного для текущего состояния
    /// </summary>
    void handle(class StateContext& context) override;

    /// <summary>
    /// Возвращает строковое название состояния
    /// </summary>
    std::string getName() const override final;
};
