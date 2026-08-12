#pragma once
#include <memory>
#include <string>
#include "IAircraft.h"
#include "IAirTrafficControl.h"

/// <summary>
/// Грузовой самолет - конкретный коллега, умеющий отправлять и принимать
/// сообщения через диспетчерскую вышку
/// </summary>
class CargoAircraft : public IAircraft
{
public:
    CargoAircraft() = default;
    virtual ~CargoAircraft() = default;
    CargoAircraft(const CargoAircraft&) = delete;
    CargoAircraft& operator=(const CargoAircraft&) = delete;
    CargoAircraft(CargoAircraft&&) = default;
    CargoAircraft& operator=(CargoAircraft&&) = default;

    /// <summary>
    /// Устанавливает диспетчерскую вышку для данного воздушного судна
    /// </summary>
    void setControlTower(std::shared_ptr<IAirTrafficControl> newTower) override final;

    /// <summary>
    /// Отправляет сообщение через диспетчерскую вышку
    /// </summary>
    void send(const std::string& message) override final;

    /// <summary>
    /// Получает сообщение от диспетчерской вышки
    /// </summary>
    void receive(const std::string& message) override final;

private:
    std::weak_ptr<IAirTrafficControl> tower;
};
