#include <iostream>
#include <memory>
#include <utility>
#include <windows.h>
#include <clocale>
#include "BankingSystem.h"
#include "SberbankBankingSystemImpl.h"
#include "TbankBankingSystemImpl.h"

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Мост\"" << std::endl << std::endl;
    // Работа со Сбербанком
    auto sberImpl{ std::make_unique<SberbankBankingSystemImpl>() };
    BankingSystem sberSystem(std::move(sberImpl));
    std::cout << "Операции со Сбербанком:" << std::endl;
    sberSystem.upBalance(1000);
    sberSystem.withdrawMoneyFromBalance(200);
    sberSystem.viewBalance();
    // Работа с Т-банком
    auto tbankImpl{ std::make_unique<TbankBankingSystemImpl>() };
    BankingSystem tbankSystem(std::move(tbankImpl));
    std::cout << std::endl << "Операции с Т-банком:" << std::endl;
    tbankSystem.upBalance(500);
    tbankSystem.withdrawMoneyFromBalance(150);
    tbankSystem.viewBalance();
    return 0;
}
