#pragma once
#include <string>

/// <summary>
/// Абстрактный процессор заказа, реализующий шаблонный метод. Определяет
/// скелет алгоритма обработки, делегируя конкретные шаги наследникам
/// </summary>
class IOrderProcessor
{
public:
    IOrderProcessor() = default;
    virtual ~IOrderProcessor() = default;
    IOrderProcessor(const IOrderProcessor&) = default;
    IOrderProcessor& operator=(const IOrderProcessor&) = default;
    IOrderProcessor(IOrderProcessor&&) = default;
    IOrderProcessor& operator=(IOrderProcessor&&) = default;

    /// <summary>
    /// Шаблонный метод - выполняет весь процесс обработки заказа. Состоит из
    /// последовательности шагов, которые переопределяются в подклассах
    /// </summary>
    void processOrder() const;

    /// <summary>
    /// Возвращает строковое название типа процессора (для отладки)
    /// </summary>
    virtual std::string getName() const = 0;

protected:
    /// <summary>
    /// Шаг 1: проверка данных заказа
    /// </summary>
    virtual void validate() const = 0;

    /// <summary>
    /// Шаг 2: расчет итоговой стоимости
    /// </summary>
    virtual void calculatePrice() const = 0;

    /// <summary>
    /// Шаг 3: отправка уведомления клиенту
    /// </summary>
    virtual void notify() const = 0;
};
