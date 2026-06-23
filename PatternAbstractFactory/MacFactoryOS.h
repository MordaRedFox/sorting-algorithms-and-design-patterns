#pragma once
#include <memory>
#include "IFactoryOS.h"
#include "IButton.h"
#include "ITextField.h"

/// <summary>
/// Конкретная фабрика - фабрика продуктов для Mac
/// </summary>
class MacFactoryOS : public IFactoryOS
{
public:
    /// <summary>
    /// Создание кнопки Mac
    /// </summary>
    std::unique_ptr<IButton> createButton() override final;

    /// <summary>
    /// Создание текстового поля Mac
    /// </summary>
    std::unique_ptr<ITextField> createTextField() override final;
};
