#pragma once
#include <memory>
#include "SwordCreator.h"
#include "AbstractSword.h"

/// <summary>
/// Конкретный создатель золотых мечей
/// </summary>
class GoldenSwordCreator : public SwordCreator
{
protected:
	/// <summary>
	/// Фабричный метод, возвращает указатель базового типа на золотой меч
	/// </summary>
	std::unique_ptr<AbstractSword> factoryMethod() override final;
};
