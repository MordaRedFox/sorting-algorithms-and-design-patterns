#pragma once

/// <summary>
/// Интерфейс (реализатор) для конкретных классов реализаторов
/// </summary>
class IBankingSystemImpl
{
public:
	IBankingSystemImpl() = default;
	virtual ~IBankingSystemImpl() = default;
	IBankingSystemImpl(const IBankingSystemImpl&) = delete;
	IBankingSystemImpl& operator=(const IBankingSystemImpl&) = delete;
	IBankingSystemImpl(IBankingSystemImpl&&) = default;
	IBankingSystemImpl& operator=(IBankingSystemImpl&&) = default;

	/// <summary>
	/// Абстрактная операция реализатора для начисления денег на счет
	/// </summary>
	virtual void upBalanceImpl(int amountMoney) = 0;

	/// <summary>
	/// Абстрактная операция реализатора для снятия денег с счета
	/// </summary>
	virtual void withdrawMoneyFromBalanceImpl(int amountMoney) = 0;

	/// <summary>
	/// Абстрактная операция реализатора для проверки баланса счета
	/// </summary>
	virtual void viewBalanceImpl() = 0;
};
