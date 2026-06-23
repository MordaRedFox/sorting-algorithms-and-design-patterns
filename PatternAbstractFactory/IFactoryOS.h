#pragma once
#include <memory>
#include "IButton.h"
#include "ITextField.h"

/// <summary>
/// Интерфейс абстрактной фабрики
/// </summary>
class IFactoryOS
{
public:
    IFactoryOS() = default;
    virtual ~IFactoryOS() = default;
    IFactoryOS(const IFactoryOS&) = delete;
    IFactoryOS& operator=(const IFactoryOS&) = delete;
    IFactoryOS(IFactoryOS&&) = default;
    IFactoryOS& operator=(IFactoryOS&&) = default;

    /// <summary>
    /// Абстрактный метод для создания кнопки
    /// </summary>
    virtual std::unique_ptr<IButton> createButton() = 0;

    /// <summary>
    /// Абстрактный метод для создания текстового поля
    /// </summary>
    virtual std::unique_ptr<ITextField> createTextField() = 0;
};
