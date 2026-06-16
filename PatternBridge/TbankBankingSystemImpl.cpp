#include <iostream>
#include "TbankBankingSystemImpl.h"

void TbankBankingSystemImpl::upBalanceImpl(int amountMoney)
{
	std::cout << "Вы положили на счет Т-банка " << amountMoney
		<< " рублей" << std::endl;
}

void TbankBankingSystemImpl::withdrawMoneyFromBalanceImpl(int amountMoney)
{
	std::cout << "Вы списали со счета Т-банка " << amountMoney
		<< " рублей" << std::endl;
}

void TbankBankingSystemImpl::viewBalanceImpl()
{
	std::cout << "Вы проверили баланс вашего счета Т-банка" << std::endl;
}
