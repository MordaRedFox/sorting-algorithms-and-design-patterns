#pragma once
#include <string>
#include <memory>
#include "CarPrototype.h"

/// <summary>
/// Конкретный прототип - автомобиль Toyota Camry
/// </summary>
class ToyotaCamry : public CarPrototype
{
public:
    ToyotaCamry();
    ~ToyotaCamry() = default;
    ToyotaCamry(const ToyotaCamry&) = default;
    ToyotaCamry& operator=(const ToyotaCamry&) = default;
    ToyotaCamry(ToyotaCamry&&) = default;
    ToyotaCamry& operator=(ToyotaCamry&&) = default;

    /// <summary>
    /// Копирует прототип автомобиля Toyota Camry
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
