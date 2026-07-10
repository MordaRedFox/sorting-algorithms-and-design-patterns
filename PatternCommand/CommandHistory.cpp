#include <iostream>
#include <memory>
#include "ICommand.h"
#include "CommandHistory.h"

void CommandHistory::push(std::shared_ptr<ICommand> command)
{
    if (command) history.push_back(command);
}

bool CommandHistory::undo()
{
    if (history.empty())
    {
        std::cout << "История пуста, нечего отменять" << std::endl;
        return false;
    }
    auto& last{ history.back() };
    last->undo();
    history.pop_back();
    return true;
}

void CommandHistory::clear()
{
    history.clear();
}

size_t CommandHistory::size() const
{
    return history.size();
}
