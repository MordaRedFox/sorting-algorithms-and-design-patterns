#pragma once

/// <summary>
/// Интерфейс, представляющий машину
/// </summary>
class ICar
{
public:
    ICar() = default;
    virtual ~ICar() = default;
    ICar(const ICar&) = delete;
    ICar& operator=(const ICar&) = delete;
    ICar(ICar&&) = default;
    ICar& operator=(ICar&&) = default;

    /// <summary>
    /// Метод, позволяющий машине ехать по дороге
    /// </summary>
    virtual void drivingRoad() = 0;

    /// <summary>
    /// Метод, позволяющий взять пассажиров на борт машины
    /// </summary>
    virtual void takePassengers(int count) = 0;
};
