#pragma once
#include <vector>
#include <memory>
#include "ICommand.h"

/// <summary>
/// Хранит историю выполненных команд для поддержки отмены (Undo)
/// </summary>
class CommandHistory
{
public:
    CommandHistory() = default;
    ~CommandHistory() = default;
    CommandHistory(const CommandHistory&) = default;
    CommandHistory& operator=(const CommandHistory&) = default;
    CommandHistory(CommandHistory&&) = default;
    CommandHistory& operator=(CommandHistory&&) = default;

    /// <summary>
    /// Добавляет выполненную команду в историю
    /// </summary>
    void push(std::shared_ptr<ICommand> command);

    /// <summary>
    /// Отменяет последнюю команду и удаляет ее из истории
    /// </summary>
    bool undo();

    /// <summary>
    /// Очищает всю историю (без вызова undo)
    /// </summary>
    void clear();

    /// <summary>
    /// Возвращает количество команд в истории
    /// </summary>
    size_t size() const;

private:
    std::vector<std::shared_ptr<ICommand>> history;
};
