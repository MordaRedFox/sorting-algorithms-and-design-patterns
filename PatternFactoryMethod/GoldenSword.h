#pragma once
#include "AbstractSword.h"

class GoldenSword : public AbstractSword
{
public:
	/// <summary>
	/// Использование золотого меча
	/// </summary>
	void use() override final;
};
