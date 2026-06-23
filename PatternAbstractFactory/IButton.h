#pragma once

/// <summary>
/// Интерфейс для представления кнопки
/// </summary>
class IButton
{
public:
    IButton() = default;
    virtual ~IButton() = default;
    IButton(const IButton&) = delete;
    IButton& operator=(const IButton&) = delete;
    IButton(IButton&&) = default;
    IButton& operator=(IButton&&) = default;

    /// <summary>
    /// Абстрактный метод нажатия на кнопку
    /// </summary>
    virtual void click() = 0;
};
