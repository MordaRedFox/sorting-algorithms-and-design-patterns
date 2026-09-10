#include <iostream>
#include <memory>
#include <vector>
#include <clocale>
#include "IOrder.h"
#include "NormalOrder.h"
#include "ExpressOrder.h"
#include "ValidationVisitor.h"
#include "PriceCalculationVisitor.h"
#include "NotificationVisitor.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Посетитель\""
        << std::endl << std::endl;
    std::vector<std::shared_ptr<IOrder>> orders{
        std::make_shared<NormalOrder>("Иван"),
        std::make_shared<ExpressOrder>("Мария")
    };
    ValidationVisitor validation;
    PriceCalculationVisitor priceCalculation;
    NotificationVisitor notification;
    for (const auto& order : orders)
    {
        std::cout << "Заказ: " << order->getName() << std::endl;
        std::cout << "Посетитель: " << validation.getName() << std::endl;
        order->accept(validation);
        std::cout << "Посетитель: " << priceCalculation.getName() << std::endl;
        order->accept(priceCalculation);
        std::cout << "Посетитель: " << notification.getName() << std::endl;
        order->accept(notification);
    }
    return 0;
}
