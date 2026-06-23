#pragma once

/// <summary>
/// Интерфейс абстрактной банковской системы
/// </summary>
class IBankingSystem
{
public:
	IBankingSystem() = default;
	virtual ~IBankingSystem() = default;
	IBankingSystem(const IBankingSystem&) = delete;
	IBankingSystem& operator=(const IBankingSystem&) = delete;
	IBankingSystem(IBankingSystem&&) = default;
	IBankingSystem& operator=(IBankingSystem&&) = default;

	/// <summary>
	/// Абстрактная операция интерфейса для начисления денег на счет
	/// </summary>
	virtual void upBalance(int amountMoney) = 0;

	/// <summary>
	/// Абстрактная операция интерфейса для снятия денег с счета
	/// </summary>
	virtual void withdrawMoneyFromBalance(int amountMoney) = 0;

	/// <summary>
	/// Абстрактная операция интерфейса для проверки баланса счета
	/// </summary>
	virtual void viewBalance() = 0;
};
