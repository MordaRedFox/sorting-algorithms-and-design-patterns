#include <utility>
#include <string>
#include "NormalOrder.h"
#include "IOrderVisitor.h"

NormalOrder::NormalOrder(std::string custName)
    : customerName(std::move(custName)) {}

std::string NormalOrder::getName() const
{
    return "Обычный заказ";
}

const std::string& NormalOrder::getCustomerName() const
{
    return customerName;
}

double NormalOrder::getBasePrice() const
{
    return 1000.0;
}

void NormalOrder::accept(const IOrderVisitor& visitor) const
{
    visitor.visit(*this);
}
