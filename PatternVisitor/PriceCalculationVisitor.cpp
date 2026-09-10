#include <iostream>
#include <string>
#include "PriceCalculationVisitor.h"
#include "NormalOrder.h"
#include "ExpressOrder.h"

std::string PriceCalculationVisitor::getName() const
{
    return "Расчет стоимости";
}

void PriceCalculationVisitor::visit(const NormalOrder& order) const
{
    std::cout << "[PriceCalculationVisitor] Расчет стоимости обычного заказа: "
        << "базовая цена " << order.getBasePrice() << " руб." << std::endl;
}

void PriceCalculationVisitor::visit(const ExpressOrder& order) const
{
    const double total{ order.getBasePrice() + order.getExpressFee() };
    std::cout << "[PriceCalculationVisitor] Расчет стоимости срочного заказа: "
        << "базовая цена " << order.getBasePrice()
        << " руб. + наценка за срочность " << order.getExpressFee()
        << " руб. = " << total << " руб." << std::endl;
}
