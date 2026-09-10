#pragma once
#include <string>
#include "IOrder.h"
#include "IOrderVisitor.h"

/// <summary>
/// Обычный заказ: стандартные правила обработки
/// </summary>
class NormalOrder : public IOrder
{
public:
    explicit NormalOrder(std::string custName);
    virtual ~NormalOrder() = default;
    NormalOrder(const NormalOrder&) = default;
    NormalOrder& operator=(const NormalOrder&) = default;
    NormalOrder(NormalOrder&&) = default;
    NormalOrder& operator=(NormalOrder&&) = default;

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
    /// Принимает посетителя
    /// </summary>
    void accept(const IOrderVisitor& visitor) const override final;

private:
    std::string customerName;
};
