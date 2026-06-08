#pragma once

/// <summary>
/// Абстрактный класс (продукт фабрики) для представления текстового поля
/// </summary>
class AbstractTextField
{
public:
	AbstractTextField() = default;
	virtual ~AbstractTextField() = default;
	AbstractTextField(const AbstractTextField&) = delete;
	AbstractTextField& operator=(const AbstractTextField&) = delete;
	AbstractTextField(AbstractTextField&&) = default;
	AbstractTextField& operator=(AbstractTextField&&) = default;

	/// <summary>
	/// Абстрактный метод для ввода текста в текстовое поле
	/// </summary>
	virtual void inputText() = 0;
};
