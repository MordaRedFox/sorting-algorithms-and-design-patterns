#pragma once
#include "AbstractTextField.h"

/// <summary>
/// Конкретный класс (продукт фабрики) для текстового поля Windows
/// </summary>
class WinTextField : public AbstractTextField
{
public:
	/// <summary>
	/// Ввод текста в текстовое поле Windows
	/// </summary>
	void inputText() override final;
};
