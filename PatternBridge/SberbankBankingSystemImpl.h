#pragma once
#include "IBankingSystemImpl.h"

/// <summary>
/// Конкретный реализатор - банковская система Сбербанка
/// </summary>
class SberbankBankingSystemImpl : public IBankingSystemImpl
{
public:
	/// <summary>
	/// Операция банковской системы Сбербанка для начисления денег на счет
	/// </summary>
	void upBalanceImpl(int amountMoney) override final;

	/// <summary>
	/// Операция банковской системы Сбербанка для снятия денег с счета
	/// </summary>
	void withdrawMoneyFromBalanceImpl(int amountMoney) override final;

	/// <summary>
	/// Операция банковской системы Сбербанка для проверки баланса счета
	/// </summary>
	void viewBalanceImpl() override final;
};
