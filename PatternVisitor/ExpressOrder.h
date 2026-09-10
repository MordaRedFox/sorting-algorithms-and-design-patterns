#pragma once
#include <string>
#include "IOrder.h"
#include "IOrderVisitor.h"

/// <summary>
/// Срочный заказ: ускоренная проверка, повышенная цена, срочное уведомление
/// </summary>
class ExpressOrder : public IOrder
{
public:
    explicit ExpressOrder(std::string custName);
    virtual ~ExpressOrder() = default;
    ExpressOrder(const ExpressOrder&) = default;
    ExpressOrder& operator=(const ExpressOrder&) = default;
    ExpressOrder(ExpressOrder&&) = default;
    ExpressOrder& operator=(ExpressOrder&&) = default;

    /// <summary>
    /// Возвращает строковое название типа заказа (для отладки)
    /// </summary>
    std::string getName() const override final;

    /// <summary>
    /// Имя клиента
    /// </summary>
    const std::string& getCustomerName() const;

    /// <summary>
    /// Базовая стоимость заказа
    /// </summary>
    double getBasePrice() const;

    /// <summary>
    /// Наценка за срочность
    /// </summary>
    double getExpressFee() const;

    /// <summary>
    /// Принимает посетителя
    /// </summary>
    void accept(const IOrderVisitor& visitor) const override final;

private:
    std::string customerName;
};
