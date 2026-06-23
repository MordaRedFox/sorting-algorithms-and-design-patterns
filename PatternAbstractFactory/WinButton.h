#pragma once
#include "IButton.h"

/// <summary>
/// Конкретный класс (продукт фабрики) для кнопки Windows
/// </summary>
class WinButton : public IButton
{
public:
    /// <summary>
    /// Нажатие на кнопку Windows
    /// </summary>
    void click() override final;
};
