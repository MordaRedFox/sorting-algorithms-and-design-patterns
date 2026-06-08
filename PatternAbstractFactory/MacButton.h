#pragma once
#include "AbstractButton.h"

/// <summary>
/// Конкретный класс (продукт фабрики) для кнопки Mac
/// </summary>
class MacButton : public AbstractButton
{
public:
	/// <summary>
	/// Нажатие на кнопку Mac
	/// </summary>
	void click() override final;
};
