#pragma once
#include "ICommand.h"
#include "Light.h"

/// <summary>
/// Команда выключения света (с сохранением предыдущего состояния)
/// </summary>
class LightOffCommand : public ICommand
{
public:
    explicit LightOffCommand(Light& light);

    /// <summary>
    /// Выполняет команду
    /// </summary>
    void execute() override final;

    /// <summary>
    /// Отменяет выполнение команды
    /// </summary>
    void undo() override final;

private:
    Light& light;
    bool previousState;
    int previousBrightness;
};
