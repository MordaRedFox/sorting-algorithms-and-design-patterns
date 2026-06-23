#pragma once
#include "ITextField.h"

/// <summary>
/// Конкретный класс (продукт фабрики) для текстового поля Windows
/// </summary>
class WinTextField : public ITextField
{
public:
	/// <summary>
	/// Ввод текста в текстовое поле Windows
	/// </summary>
	void inputText() override final;
};
