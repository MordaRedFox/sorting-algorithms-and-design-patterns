#pragma once
#include "ISword.h"

/// <summary>
/// Класс, представляющий конкретный железный меч
/// </summary>
class IronSword : public ISword
{
public:
	/// <summary>
	/// Использование железного меча
	/// </summary>
	void use() override final;
};
