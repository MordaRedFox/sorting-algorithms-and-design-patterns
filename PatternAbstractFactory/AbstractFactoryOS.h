#pragma once
#include <memory>
#include "AbstractButton.h"
#include "AbstractTextField.h"

/// <summary>
/// Класс для представления абстрактной фабрики
/// </summary>
class AbstractFactoryOS
{
public:
    AbstractFactoryOS() = default;
    virtual ~AbstractFactoryOS() = default;
    AbstractFactoryOS(const AbstractFactoryOS&) = delete;
    AbstractFactoryOS& operator=(const AbstractFactoryOS&) = delete;
    AbstractFactoryOS(AbstractFactoryOS&&) = default;
    AbstractFactoryOS& operator=(AbstractFactoryOS&&) = default;

    /// <summary>
    /// Абстрактный метод для создания кнопки
    /// </summary>
    virtual std::unique_ptr<AbstractButton> createButton() = 0;

    /// <summary>
    /// Абстрактный метод для создания текстового поля
    /// </summary>
    virtual std::unique_ptr<AbstractTextField> createTextField() = 0;
};
