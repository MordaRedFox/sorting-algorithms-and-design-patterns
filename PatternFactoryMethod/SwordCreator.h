#pragma once
#include <memory>
#include "AbstractSword.h"

/// <summary>
/// Абстрактный создатель мечей с фабричным методом
/// </summary>
class SwordCreator
{
public:
    SwordCreator() = default;
    virtual ~SwordCreator() = default;
    SwordCreator(const SwordCreator&) = delete;
    SwordCreator& operator=(const SwordCreator&) = delete;
    SwordCreator(SwordCreator&&) = default;
    SwordCreator& operator=(SwordCreator&&) = default;

    /// <summary>
    /// Виртуальный метод для создания и использования меча
    /// </summary>
    void createAndUseSword();

protected:
	/// <summary>
	/// Виртуальный фабричный метод для создания продукта
	/// </summary>
	virtual std::unique_ptr<AbstractSword> factoryMethod() = 0;
};
