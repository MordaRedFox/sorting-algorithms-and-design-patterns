#include <iostream>
#include "SberbankBankingSystemImpl.h"

void SberbankBankingSystemImpl::upBalanceImpl(int amountMoney)
{
	std::cout << "Вы положили на счет Сбербанка " << amountMoney
		<< " рублей" << std::endl;
}

void SberbankBankingSystemImpl::withdrawMoneyFromBalanceImpl(int amountMoney)
{
	std::cout << "Вы списали со счета Сбербанка " << amountMoney
		<< " рублей" << std::endl;
}

void SberbankBankingSystemImpl::viewBalanceImpl()
{
	std::cout << "Вы проверили баланс вашего счета Сбербанка" << std::endl;
}
