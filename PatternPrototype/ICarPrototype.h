#pragma once
#include <memory>
#include <string>

/// <summary>
/// Интерфейс, определяющий прототип автомобиля
/// </summary>
class ICarPrototype
{
public:
    ICarPrototype() = default;
    virtual ~ICarPrototype() = default;
    ICarPrototype(const ICarPrototype&) = default;
    ICarPrototype& operator=(const ICarPrototype&) = default;
    ICarPrototype(ICarPrototype&&) = default;
    ICarPrototype& operator=(ICarPrototype&&) = default;

    /// <summary>
    /// Абстрактный метод для копирования
    /// </summary>
    virtual std::unique_ptr<ICarPrototype> clone() const = 0;
    
    // Геттеры
    virtual std::string getBrand() const = 0;
    virtual std::string getModel() const = 0;
    virtual std::string getColor() const = 0;
    virtual unsigned int getPrice() const = 0;

    // Сеттеры
    virtual void setColor(const std::string& color) = 0;
    virtual void setPrice(unsigned int price) = 0;
};
