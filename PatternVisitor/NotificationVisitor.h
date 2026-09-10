#pragma once
#include <string>
#include "IOrderVisitor.h"
#include "NormalOrder.h"
#include "ExpressOrder.h"

/// <summary>
/// Посетитель, отправляющий уведомления клиентам
/// </summary>
class NotificationVisitor : public IOrderVisitor
{
public:
    NotificationVisitor() = default;
    virtual ~NotificationVisitor() = default;
    NotificationVisitor(const NotificationVisitor&) = default;
    NotificationVisitor& operator=(const NotificationVisitor&) = default;
    NotificationVisitor(NotificationVisitor&&) = default;
    NotificationVisitor& operator=(NotificationVisitor&&) = default;

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
