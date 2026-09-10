#pragma once
#include <string>

class IOrderVisitor;

/// <summary>
/// Абстрактный заказ. Элемент структуры, который принимает посетителя
/// </summary>
class IOrder
{
public:
    IOrder() = default;
    virtual ~IOrder() = default;
    IOrder(const IOrder&) = default;
    IOrder& operator=(const IOrder&) = default;
    IOrder(IOrder&&) = default;
    IOrder& operator=(IOrder&&) = default;

    /// <summary>
    /// Принимает посетителя и делегирует ему обработку конкретного типа заказа
    /// </summary>
    virtual void accept(const IOrderVisitor& visitor) const = 0;

    /// <summary>
    /// Возвращает строковое название типа заказа (для отладки)
    /// </summary>
    virtual std::string getName() const = 0;
};
