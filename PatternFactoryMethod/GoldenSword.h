#pragma once
#include "AbstractSword.h"

/// <summary>
/// Класс, представляющий конкретный золотой меч
/// </summary>
class GoldenSword : public AbstractSword
{
public:
	/// <summary>
	/// Использование золотого меча
	/// </summary>
	void use() override final;
};
