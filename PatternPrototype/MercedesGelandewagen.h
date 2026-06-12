#pragma once
#include <string>
#include <memory>
#include "CarPrototype.h"

/// <summary>
/// Конкретный прототип - автомобиль Mercedes-Benz G-класс
/// </summary>
class MercedesGelandewagen : public CarPrototype
{
public:
    MercedesGelandewagen();
    ~MercedesGelandewagen() = default;
    MercedesGelandewagen(const MercedesGelandewagen&) = default;
    MercedesGelandewagen& operator=(const MercedesGelandewagen&) = default;
    MercedesGelandewagen(MercedesGelandewagen&&) = default;
    MercedesGelandewagen& operator=(MercedesGelandewagen&&) = default;

    /// <summary>
    /// Копирует прототип автомобиля Mercedes-Benz G-класс
    /// </summary>
    std::unique_ptr<CarPrototype> clone() const override final;

    // Геттеры
    std::string getBrand() const override final;
    std::string getModel() const override final;
    std::string getColor() const override final;
    unsigned int getPrice() const override final;

    // Сеттеры
    void setColor(const std::string& color) override final;
    void setPrice(unsigned int price) override final;

private:
    std::string engine;
    unsigned int horsepower;
    std::string color;
    std::string salonSheathing;
    std::string brand;
    std::string model;
    unsigned int price;
};
