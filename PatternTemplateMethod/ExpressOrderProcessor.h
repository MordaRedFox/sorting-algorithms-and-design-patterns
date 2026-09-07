#pragma once
#include <string>
#include "IOrderProcessor.h"

/// <summary>
/// Процессор для срочного заказа: ускоренная проверка, повышенная цена,
/// срочное уведомление
/// </summary>
class ExpressOrderProcessor : public IOrderProcessor
{
public:
    ExpressOrderProcessor() = default;
    virtual ~ExpressOrderProcessor() = default;
    ExpressOrderProcessor(const ExpressOrderProcessor&) = default;
    ExpressOrderProcessor& operator=(const ExpressOrderProcessor&) = default;
    ExpressOrderProcessor(ExpressOrderProcessor&&) = default;
    ExpressOrderProcessor& operator=(ExpressOrderProcessor&&) = default;

    /// <summary>
    /// Возвращает строковое название типа процессора (для отладки)
    /// </summary>
    std::string getName() const override final;

protected:
    /// <summary>
    /// Шаг 1: проверка данных заказа
    /// </summary>
    void validate() const override final;

    /// <summary>
    /// Шаг 2: расчет итоговой стоимости
    /// </summary>
    void calculatePrice() const override final;

    /// <summary>
    /// Шаг 3: отправка уведомления клиенту
    /// </summary>
    void notify() const override final;
};
