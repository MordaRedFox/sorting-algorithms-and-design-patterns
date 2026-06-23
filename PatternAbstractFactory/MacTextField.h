#pragma once
#include "ITextField.h"

/// <summary>
/// Конкретный класс (продукт фабрики) для текстового поля Mac
/// </summary>
class MacTextField : public ITextField
{
public:
	/// <summary>
	/// Ввод текста в текстовое поле Mac
	/// </summary>
	void inputText() override final;
};
