#pragma once
#include <memory>
#include "AbstractFactoryOS.h"
#include "AbstractButton.h"
#include "AbstractTextField.h"

/// <summary>
/// Конкретная фабрика - фабрика продуктов для Mac
/// </summary>
class MacFactoryOS : public AbstractFactoryOS
{
public:
    /// <summary>
    /// Создание кнопки Mac
    /// </summary>
    std::unique_ptr<AbstractButton> createButton() override final;

    /// <summary>
    /// Создание текстового поля Mac
    /// </summary>
    std::unique_ptr<AbstractTextField> createTextField() override final;
};
