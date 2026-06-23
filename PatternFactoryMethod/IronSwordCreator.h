#pragma once
#include <memory>
#include "SwordCreator.h"
#include "ISword.h"

/// <summary>
/// Конкретный создатель железных мечей
/// </summary>
class IronSwordCreator : public SwordCreator
{
protected:
	/// <summary>
	/// Фабричный метод, возвращает указатель базового типа на железный меч
	/// </summary>
	std::unique_ptr<ISword> factoryMethod() override final;
};
