#pragma once
#include "IBankingSystem.h"
#include "IBankingSystemImpl.h"
#include <memory>

/// <summary>
/// Класс, реализующий необходимый интерфейс
/// </summary>
class BankingSystem : public IBankingSystem
{
public:
    explicit BankingSystem(std::unique_ptr<IBankingSystemImpl> impl);

    /// <summary>
    /// Метод для начисления денег на счет
    /// </summary>
    void upBalance(int amountMoney) override final;

    /// <summary>
    /// Метод для снятия денег с счета
    /// </summary>
    void withdrawMoneyFromBalance(int amountMoney) override final;

    /// <summary>
    /// Метод для проверки баланса счета
    /// </summary>
    void viewBalance() override final;

private:
    std::unique_ptr<IBankingSystemImpl> implementor;
};
