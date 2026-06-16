#pragma once

/// <summary>
/// Интерфейс абстракции
/// </summary>
class IAbstractionBankingSystem
{
public:
	IAbstractionBankingSystem() = default;
	virtual ~IAbstractionBankingSystem() = default;
	IAbstractionBankingSystem(const IAbstractionBankingSystem&) = delete;
	IAbstractionBankingSystem& operator=(const IAbstractionBankingSystem&) = delete;
	IAbstractionBankingSystem(IAbstractionBankingSystem&&) = default;
	IAbstractionBankingSystem& operator=(IAbstractionBankingSystem&&) = default;

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
