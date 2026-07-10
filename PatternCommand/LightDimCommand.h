#pragma once
#include "ICommand.h"
#include "Light.h"

/// <summary>
/// Команда изменения яркости (с сохранением предыдущего состояния)
/// </summary>
class LightDimCommand : public ICommand
{
public:
    LightDimCommand(Light& light, int level);

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
    int newLevel;
    bool previousState;
    int previousBrightness;
};
