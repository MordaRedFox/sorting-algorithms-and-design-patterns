#include <iostream>
#include <string>
#include "ExpressOrderProcessor.h"

void ExpressOrderProcessor::validate() const
{
    std::cout << "[ExpressOrderProcessor] Проверка срочного заказа: "
        << "быстрая проверка (пропуск некоторых полей)" << std::endl;
}

void ExpressOrderProcessor::calculatePrice() const
{
    std::cout << "[ExpressOrderProcessor] Расчет стоимости: базовая цена "
        << "1000 руб. + наценка за срочность 500 руб" << std::endl;
}

void ExpressOrderProcessor::notify() const
{
    std::cout << "[ExpressOrderProcessor] Уведомление отправлено по SMS "
        << "и email (срочная доставка)" << std::endl;
}

std::string ExpressOrderProcessor::getName() const
{
    return "Срочный заказ";
}
