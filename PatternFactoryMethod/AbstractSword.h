#pragma once

/// <summary>
/// Класс, представляющий абстрактный меч
/// </summary>
class AbstractSword
{
public:
    AbstractSword() = default;
    virtual ~AbstractSword() = default;
    AbstractSword(const AbstractSword&) = delete;
    AbstractSword& operator=(const AbstractSword&) = delete;
    AbstractSword(AbstractSword&&) = default;
    AbstractSword& operator=(AbstractSword&&) = default;

	/// <summary>
	/// Абстрактный метод использования меча
	/// </summary>
	virtual void use() = 0;
};
