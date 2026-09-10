#pragma once
#include <string>

class NormalOrder;
class ExpressOrder;

/// <summary>
/// Интерфейс посетителя заказов. Позволяет добавлять новые операции над
/// заказами без изменения классов самих заказов
/// </summary>
class IOrderVisitor
{
public:
    IOrderVisitor() = default;
    virtual ~IOrderVisitor() = default;
    IOrderVisitor(const IOrderVisitor&) = default;
    IOrderVisitor& operator=(const IOrderVisitor&) = default;
    IOrderVisitor(IOrderVisitor&&) = default;
    IOrderVisitor& operator=(IOrderVisitor&&) = default;

    /// <summary>
    /// Возвращает строковое название посетителя (для отладки)
    /// </summary>
    virtual std::string getName() const = 0;

    /// <summary>
    /// Посещение обычного заказа
    /// </summary>
    virtual void visit(const NormalOrder& order) const = 0;

    /// <summary>
    /// Посещение срочного заказа
    /// </summary>
    virtual void visit(const ExpressOrder& order) const = 0;
};
