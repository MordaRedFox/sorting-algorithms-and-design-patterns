#include <memory>
#include "ICommand.h"
#include "RemoteControl.h"
#include "CommandHistory.h"

void RemoteControl::setCommand(std::shared_ptr<ICommand> command)
{
    currentCommand = command;
}

void RemoteControl::pressButton()
{
    if (!currentCommand) return;
    currentCommand->execute();
    history.push(currentCommand);
}

void RemoteControl::pressUndo()
{
    history.undo();
}

const CommandHistory& RemoteControl::getHistory() const
{
    return history;
}
