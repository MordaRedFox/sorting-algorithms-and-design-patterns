#include <iostream>
#include <string>
#include "CombatState.h"
#include "StateContext.h"

void CombatState::handle(StateContext& context)
{
    std::cout << "[CombatState] Персонаж в боевом состоянии. "
        << "Атака: 25, Скорость: 2" << std::endl;
}

std::string CombatState::getName() const
{
    return "Боевое";
}
