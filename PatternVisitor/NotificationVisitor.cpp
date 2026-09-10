#include <iostream>
#include <string>
#include "NotificationVisitor.h"
#include "NormalOrder.h"
#include "ExpressOrder.h"

std::string NotificationVisitor::getName() const
{
    return "Уведомление клиента";
}

void NotificationVisitor::visit(const NormalOrder& order) const
{
    std::cout << "[NotificationVisitor] Уведомление для клиента \""
        << order.getCustomerName()
        << "\" отправлено на email (обычная доставка)" << std::endl;
}

void NotificationVisitor::visit(const ExpressOrder& order) const
{
    std::cout << "[NotificationVisitor] Уведомление для клиента \""
        << order.getCustomerName()
        << "\" отправлено по SMS и email (срочная доставка)" << std::endl;
}
