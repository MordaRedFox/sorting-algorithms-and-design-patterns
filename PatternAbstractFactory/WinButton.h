#pragma once
#include "AbstractButton.h"

/// <summary>
/// Конкретный класс (продукт фабрики) для кнопки Windows
/// </summary>
class WinButton : public AbstractButton
{
public:
    /// <summary>
    /// Нажатие на кнопку Windows
    /// </summary>
    void click() override final;
};
