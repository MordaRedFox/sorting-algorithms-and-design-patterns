#include <iostream>
#include "IOrderProcessor.h"

void IOrderProcessor::processOrder() const
{
    std::cout << "[TemplateMethod] Начинаем обработку заказа..." << std::endl;
    validate();
    calculatePrice();
    notify();
    std::cout << "[TemplateMethod] Заказ обработан" << std::endl;
}
