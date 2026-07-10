#pragma once

/// <summary>
/// Интерфейс команды с поддержкой отмены
/// </summary>
class ICommand
{
public:
    ICommand() = default;
    virtual ~ICommand() = default;
    ICommand(const ICommand&) = delete;
    ICommand& operator=(const ICommand&) = delete;
    ICommand(ICommand&&) = default;
    ICommand& operator=(ICommand&&) = default;

    /// <summary>
    /// Выполняет команду
    /// </summary>
    virtual void execute() = 0;

    /// <summary>
    /// Отменяет выполнение команды
    /// </summary>
    virtual void undo() = 0;
};
