#pragma once
#include <string>
#include "IOrderVisitor.h"
#include "NormalOrder.h"
#include "ExpressOrder.h"

/// <summary>
/// Посетитель, выполняющий расчет стоимости заказов
/// </summary>
class PriceCalculationVisitor : public IOrderVisitor
{
public:
    PriceCalculationVisitor() = default;
    virtual ~PriceCalculationVisitor() = default;
    PriceCalculationVisitor(const PriceCalculationVisitor&) = default;
    PriceCalculationVisitor& operator=(const PriceCalculationVisitor&) = default;
    PriceCalculationVisitor(PriceCalculationVisitor&&) = default;
    PriceCalculationVisitor& operator=(PriceCalculationVisitor&&) = default;

    /// <summary>
    /// Возвращает строковое название посетителя (для отладки)
    /// </summary>
    std::string getName() const override final;

    /// <summary>
    /// Посещение обычного заказа
    /// </summary>
    void visit(const NormalOrder& order) const override final;

    /// <summary>
    /// Посещение срочного заказа
    /// </summary>
    void visit(const ExpressOrder& order) const override final;
};
