#pragma once
#include <memory>
#include <string>
#include "IAirTrafficControl.h"
#include "IAircraft.h"

/// <summary>
/// Диспетчерская вышка - конкретный посредник, который знает пассажирский и
/// грузовой самолеты и управляет их обменом
/// </summary>
class ControlTower : public IAirTrafficControl
{
public:
    ControlTower() = default;
    virtual ~ControlTower() = default;
    ControlTower(const ControlTower&) = delete;
    ControlTower& operator=(const ControlTower&) = delete;
    ControlTower(ControlTower&&) = default;
    ControlTower& operator=(ControlTower&&) = default;

    /// <summary>
    /// Регистрирует пассажирский самолет
    /// </summary>
    void setPassengerAircraft(std::shared_ptr<IAircraft> aircraft);

    /// <summary>
    /// Регистрирует грузовой самолет
    /// </summary>
    void setCargoAircraft(std::shared_ptr<IAircraft> aircraft);

    /// <summary>
    /// Отправляет сообщение от одного судна другому через вышку
    /// </summary>
    void sendMessage(const std::string& message, IAircraft* sender) override final;

private:
    std::shared_ptr<IAircraft> passengerAircraft;
    std::shared_ptr<IAircraft> cargoAircraft;
};
