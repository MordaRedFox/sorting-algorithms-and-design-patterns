#pragma once
#include <memory>
#include <utility>
#include "ICar.h"

/// <summary>
/// Базовый декоратор, реализует интерфейс машины
/// </summary>
class CarDecorator : public ICar
{
public:
    explicit CarDecorator(std::unique_ptr<ICar> car) : component(std::move(car)) {}
    virtual ~CarDecorator() = default;
    CarDecorator(const CarDecorator&) = delete;
    CarDecorator& operator=(const CarDecorator&) = delete;
    CarDecorator(CarDecorator&&) = default;
    CarDecorator& operator=(CarDecorator&&) = default;

    /// <summary>
    /// Метод, позволяющий машине ехать по дороге (делегирует вызов)
    /// </summary>
    void drivingRoad() override;

    /// <summary>
    /// Метод, позволяющий взять пассажиров на борт машины (делегирует вызов)
    /// </summary>
    void takePassengers(int count) override;

protected:
    std::unique_ptr<ICar> component;
};
