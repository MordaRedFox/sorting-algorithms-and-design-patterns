#pragma once

/// <summary>
/// Абстрактный класс (продукт фабрики) для представления кнопки
/// </summary>
class AbstractButton
{
public:
    AbstractButton() = default;
    virtual ~AbstractButton() = default;
    AbstractButton(const AbstractButton&) = delete;
    AbstractButton& operator=(const AbstractButton&) = delete;
    AbstractButton(AbstractButton&&) = default;
    AbstractButton& operator=(AbstractButton&&) = default;

    /// <summary>
    /// Абстрактный метод нажатия на кнопку
    /// </summary>
    virtual void click() = 0;
};
