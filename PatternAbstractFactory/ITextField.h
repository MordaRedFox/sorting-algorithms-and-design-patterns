#pragma once

/// <summary>
/// Интерфейс для представления текстового поля
/// </summary>
class ITextField
{
public:
	ITextField() = default;
	virtual ~ITextField() = default;
	ITextField(const ITextField&) = delete;
	ITextField& operator=(const ITextField&) = delete;
	ITextField(ITextField&&) = default;
	ITextField& operator=(ITextField&&) = default;

	/// <summary>
	/// Абстрактный метод для ввода текста в текстовое поле
	/// </summary>
	virtual void inputText() = 0;
};
