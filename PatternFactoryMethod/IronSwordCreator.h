#pragma once
#include <memory>
#include "SwordCreator.h"
#include "AbstractSword.h"

class IronSwordCreator : public SwordCreator
{
protected:
	/// <summary>
	/// Фабричный метод, возвращает указатель базового типа на железный меч
	/// </summary>
	std::unique_ptr<AbstractSword> factoryMethod() override final;
};
