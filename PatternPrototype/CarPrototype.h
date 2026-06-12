#pragma once
#include <memory>
#include <string>

/// <summary>
/// Абстрактный прототип автомобиля
/// </summary>
class CarPrototype
{
public:
    CarPrototype() = default;
    virtual ~CarPrototype() = default;
    CarPrototype(const CarPrototype&) = default;
    CarPrototype& operator=(const CarPrototype&) = default;
    CarPrototype(CarPrototype&&) = default;
    CarPrototype& operator=(CarPrototype&&) = default;

    /// <summary>
    /// Абстрактный метод для копирования
    /// </summary>
    virtual std::unique_ptr<CarPrototype> clone() const = 0;
    
    // Геттеры
    virtual std::string getBrand() const = 0;
    virtual std::string getModel() const = 0;
    virtual std::string getColor() const = 0;
    virtual unsigned int getPrice() const = 0;

    // Сеттеры
    virtual void setColor(const std::string& color) = 0;
    virtual void setPrice(unsigned int price) = 0;
};
