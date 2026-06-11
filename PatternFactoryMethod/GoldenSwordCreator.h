#pragma once
#include <memory>
#include "SwordCreator.h"
#include "AbstractSword.h"

class GoldenSwordCreator : public SwordCreator
{
protected:
	/// <summary>
	/// Фабричный метод, возвращает указатель базового типа на золотой меч
	/// </summary>
	std::unique_ptr<AbstractSword> factoryMethod() override final;
};
