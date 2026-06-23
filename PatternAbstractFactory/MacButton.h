#pragma once
#include "IButton.h"

/// <summary>
/// Конкретный класс (продукт фабрики) для кнопки Mac
/// </summary>
class MacButton : public IButton
{
public:
	/// <summary>
	/// Нажатие на кнопку Mac
	/// </summary>
	void click() override final;
};
