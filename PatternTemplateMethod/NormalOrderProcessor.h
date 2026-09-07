#pragma once
#include <string>
#include "IOrderProcessor.h"

/// <summary>
/// Процессор для обычного заказа: стандартная проверка, базовая цена,
/// простое уведомление
/// </summary>
class NormalOrderProcessor : public IOrderProcessor
{
public:
    NormalOrderProcessor() = default;
    virtual ~NormalOrderProcessor() = default;
    NormalOrderProcessor(const NormalOrderProcessor&) = default;
    NormalOrderProcessor& operator=(const NormalOrderProcessor&) = default;
    NormalOrderProcessor(NormalOrderProcessor&&) = default;
    NormalOrderProcessor& operator=(NormalOrderProcessor&&) = default;

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
