#pragma once
#include "CarDecorator.h"

class LoggerDecorator : public CarDecorator
{
public:
    using CarDecorator::CarDecorator;

    /// <summary>
    /// Метод, позволяющий машине ехать по дороге с записью логов
    /// </summary>
    void drivingRoad() override final;

    /// <summary>
    /// Метод, позволяющий взять пассажиров на борт машины с записью логов
    /// </summary>
    void takePassengers(int count) override final;
};
