#include <iostream>
#include <string>
#include "ValidationVisitor.h"
#include "NormalOrder.h"
#include "ExpressOrder.h"

std::string ValidationVisitor::getName() const
{
    return "Проверка заказа";
}

void ValidationVisitor::visit(const NormalOrder& order) const
{
    std::cout << "[ValidationVisitor] Проверка обычного заказа клиента \""
        << order.getCustomerName() << "\": все поля заполнены" << std::endl;
}

void ValidationVisitor::visit(const ExpressOrder& order) const
{
    std::cout << "[ValidationVisitor] Проверка срочного заказа клиента \""
        << order.getCustomerName()
        << "\": быстрая проверка (пропуск некоторых полей)" << std::endl;
}
