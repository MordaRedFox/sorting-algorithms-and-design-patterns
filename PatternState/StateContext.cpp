#include <iostream>
#include <memory>
#include "StateContext.h"
#include "NormalState.h"
#include "IState.h"

StateContext::StateContext()
    : currentState(std::make_shared<NormalState>()) {}

void StateContext::setState(std::shared_ptr<IState> newState)
{
    if (newState)
    {
        currentState = newState;
        std::cout << "[Context] Состояние изменено на \""
            << currentState->getName() << "\"" << std::endl;
    }
}

void StateContext::request()
{
    if (currentState)
        currentState->handle(*this);
    else
        std::cout << "[Context] Состояние не установлено!" << std::endl;
}

void StateContext::printState() const
{
    if (currentState)
        std::cout << "[Context] Текущее состояние: "
            << currentState->getName() << std::endl;
    else
        std::cout << "[Context] Состояние отсутствует!" << std::endl;
}
