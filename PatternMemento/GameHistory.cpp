#include <stdexcept>
#include <memory>
#include "GameHistory.h"
#include "IMemento.h"

void GameHistory::pushMemento(std::shared_ptr<IMemento> memento)
{
    history.push_back(memento);
}

std::shared_ptr<IMemento> GameHistory::popMemento()
{
    if (history.empty()) throw std::runtime_error("История пуста");
    auto memento{ history.back() };
    history.pop_back();
    return memento;
}

bool GameHistory::isEmpty() const
{
    return history.empty();
}
