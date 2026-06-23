#pragma once
#include "ISword.h"

/// <summary>
/// Класс, представляющий конкретный золотой меч
/// </summary>
class GoldenSword : public ISword
{
public:
	/// <summary>
	/// Использование золотого меча
	/// </summary>
	void use() override final;
};
