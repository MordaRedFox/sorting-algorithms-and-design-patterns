#include <iostream>
#include <string>
#include "NormalState.h"
#include "StateContext.h"

void NormalState::handle(StateContext& context)
{
    std::cout << "[NormalState] Персонаж в обычном состоянии. "
        << "Атака: 10, Скорость: 5" << std::endl;
}

std::string NormalState::getName() const
{
    return "Обычное";
}
