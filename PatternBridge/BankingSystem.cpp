#include <memory>
#include <utility>
#include "BankingSystem.h"
#include "IBankingSystemImpl.h"

BankingSystem::BankingSystem(
    std::unique_ptr<IBankingSystemImpl> impl) : implementor(std::move(impl)) {}

void BankingSystem::upBalance(int amountMoney)
{
    if (implementor) implementor->upBalanceImpl(amountMoney);
}

void BankingSystem::withdrawMoneyFromBalance(int amountMoney)
{
    if (implementor) implementor->withdrawMoneyFromBalanceImpl(amountMoney);
}

void BankingSystem::viewBalance()
{
    if (implementor) implementor->viewBalanceImpl();
}
