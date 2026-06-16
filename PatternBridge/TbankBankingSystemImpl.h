#pragma once
#include "IBankingSystemImpl.h"

/// <summary>
/// Конкретный реализатор - банковская система Т-банка
/// </summary>
class TbankBankingSystemImpl : public IBankingSystemImpl
{
public:
	/// <summary>
	/// Операция банковской системы Т-банка для начисления денег на счет
	/// </summary>
	void upBalanceImpl(int amountMoney) override final;

	/// <summary>
	/// Операция банковской системы Т-банка для снятия денег с счета
	/// </summary>
	void withdrawMoneyFromBalanceImpl(int amountMoney) override final;

	/// <summary>
	/// Операция банковской системы Т-банка для проверки баланса счета
	/// </summary>
	void viewBalanceImpl() override final;
};
