#pragma once
#include <memory>
#include "ICommand.h"
#include "CommandHistory.h"

/// <summary>
/// Вызывающий (Invoker) - хранит текущую команду и историю, инициирует
/// выполнение и отмену
/// </summary>
class RemoteControl
{
public:
    RemoteControl() = default;
    ~RemoteControl() = default;
    RemoteControl(const RemoteControl&) = default;
    RemoteControl& operator=(const RemoteControl&) = default;
    RemoteControl(RemoteControl&&) = default;
    RemoteControl& operator=(RemoteControl&&) = default;

    /// <summary>
    /// Устанавливает команду, которая будет выполнена при нажатии кнопки
    /// </summary>
    void setCommand(std::shared_ptr<ICommand> command);

    /// <summary>
    /// Выполняет текущую команду и сохраняет ее в истории
    /// </summary>
    void pressButton();

    /// <summary>
    /// Отменяет последнюю выполненную команду (из истории)
    /// </summary>
    void pressUndo();

    /// <summary>
    /// Возвращает ссылку на историю
    /// </summary>
    const CommandHistory& getHistory() const;

private:
    std::shared_ptr<ICommand> currentCommand;
    CommandHistory history;
};
