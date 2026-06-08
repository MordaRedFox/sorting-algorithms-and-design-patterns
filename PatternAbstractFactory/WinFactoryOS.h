#pragma once
#include <memory>
#include "AbstractFactoryOS.h"
#include "AbstractButton.h"
#include "AbstractTextField.h"

/// <summary>
/// Конкретная фабрика - фабрика продуктов для продуктов Windows
/// </summary>
class WinFactoryOS : public AbstractFactoryOS
{
public:
    /// <summary>
    /// Создание кнопки Windows
    /// </summary>
    std::unique_ptr<AbstractButton> createButton() override final;

    /// <summary>
    /// Создание текстового поля Windows
    /// </summary>
    std::unique_ptr<AbstractTextField> createTextField() override final;
};
