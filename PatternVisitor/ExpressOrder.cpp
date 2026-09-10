#include <utility>
#include <string>
#include "ExpressOrder.h"
#include "IOrderVisitor.h"

ExpressOrder::ExpressOrder(std::string custName)
    : customerName(std::move(custName)) {}

std::string ExpressOrder::getName() const
{
    return "Срочный заказ";
}

const std::string& ExpressOrder::getCustomerName() const
{
    return customerName;
}

double ExpressOrder::getBasePrice() const
{
    return 1000.0;
}

double ExpressOrder::getExpressFee() const
{
    return 500.0;
}

void ExpressOrder::accept(const IOrderVisitor& visitor) const
{
    visitor.visit(*this);
}
