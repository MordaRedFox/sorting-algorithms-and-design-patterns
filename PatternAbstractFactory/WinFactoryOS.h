#pragma once
#include <memory>
#include "IFactoryOS.h"
#include "IButton.h"
#include "ITextField.h"

/// <summary>
/// Конкретная фабрика - фабрика продуктов для Windows
/// </summary>
class WinFactoryOS : public IFactoryOS
{
public:
    /// <summary>
    /// Создание кнопки Windows
    /// </summary>
    std::unique_ptr<IButton> createButton() override final;

    /// <summary>
    /// Создание текстового поля Windows
    /// </summary>
    std::unique_ptr<ITextField> createTextField() override final;
};
