#pragma once

/// <summary>
/// Интерфейс для мечей
/// </summary>
class ISword
{
public:
    ISword() = default;
    virtual ~ISword() = default;
    ISword(const ISword&) = delete;
    ISword& operator=(const ISword&) = delete;
    ISword(ISword&&) = default;
    ISword& operator=(ISword&&) = default;

	/// <summary>
	/// Абстрактный метод использования меча
	/// </summary>
	virtual void use() = 0;
};
