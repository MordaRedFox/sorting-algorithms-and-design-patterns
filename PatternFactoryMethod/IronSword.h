#pragma once
#include "AbstractSword.h"

class IronSword : public AbstractSword
{
public:
	/// <summary>
	/// Использование железного меча
	/// </summary>
	void use() override final;
};
