#pragma once
#include "ICar.h"

/// <summary>
/// Конкретная машина - грузовик
/// </summary>
class Truck : public ICar
{
public:
    /// <summary>
    /// Метод, позволяющий машине ехать по дороге
    /// </summary>
    void drivingRoad() override final;

    /// <summary>
    /// Метод, позволяющий взять пассажиров на борт машины
    /// </summary>
    void takePassengers(int count) override final;
};
