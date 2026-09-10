#pragma once
#include <string>
#include "IOrderVisitor.h"
#include "NormalOrder.h"
#include "ExpressOrder.h"

/// <summary>
/// Посетитель, выполняющий проверку заказов
/// </summary>
class ValidationVisitor : public IOrderVisitor
{
public:
    ValidationVisitor() = default;
    virtual ~ValidationVisitor() = default;
    ValidationVisitor(const ValidationVisitor&) = default;
    ValidationVisitor& operator=(const ValidationVisitor&) = default;
    ValidationVisitor(ValidationVisitor&&) = default;
    ValidationVisitor& operator=(ValidationVisitor&&) = default;

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
