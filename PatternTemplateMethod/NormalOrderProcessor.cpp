#include <iostream>
#include <string>
#include "NormalOrderProcessor.h"

void NormalOrderProcessor::validate() const
{
    std::cout << "[NormalOrderProcessor] Проверка обычного заказа: все "
        << "поля заполнены" << std::endl;
}

void NormalOrderProcessor::calculatePrice() const
{
    std::cout << "[NormalOrderProcessor] Расчет стоимости: базовая "
        << "цена 1000 руб" << std::endl;
}

void NormalOrderProcessor::notify() const
{
    std::cout << "[NormalOrderProcessor] Уведомление отправлено на "
        << "email (обычная доставка)" << std::endl;
}

std::string NormalOrderProcessor::getName() const
{
    return "Обычный заказ";
}
