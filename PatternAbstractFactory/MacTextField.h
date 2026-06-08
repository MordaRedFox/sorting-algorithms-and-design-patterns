#pragma once
#include "AbstractTextField.h"

/// <summary>
/// Конкретный класс (продукт фабрики) для текстового поля Mac
/// </summary>
class MacTextField : public AbstractTextField
{
public:
	/// <summary>
	/// Ввод текста в текстовое поле Mac
	/// </summary>
	void inputText() override final;
};
