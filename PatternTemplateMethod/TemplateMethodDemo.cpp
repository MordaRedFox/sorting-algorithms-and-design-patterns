#include <iostream>
#include <memory>
#include <clocale>
#include "IOrderProcessor.h"
#include "NormalOrderProcessor.h"
#include "ExpressOrderProcessor.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Шаблонный метод\""
        << std::endl << std::endl;
    std::cout << "Обычный заказ" << std::endl;
    std::shared_ptr<IOrderProcessor> normal{
        std::make_shared<NormalOrderProcessor>() };
    std::cout << "Процессор: " << normal->getName() << std::endl;
    normal->processOrder();
    std::cout << std::endl << "Срочный заказ" << std::endl;
    std::shared_ptr<IOrderProcessor> express{
        std::make_shared<ExpressOrderProcessor>() };
    std::cout << "Процессор: " << express->getName() << std::endl;
    express->processOrder();
    return 0;
}
