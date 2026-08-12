#include <memory>
#include <string>
#include <stdexcept>
#include "ControlTower.h"
#include "IAircraft.h"

void ControlTower::setPassengerAircraft(std::shared_ptr<IAircraft> aircraft)
{
    passengerAircraft = aircraft;
}

void ControlTower::setCargoAircraft(std::shared_ptr<IAircraft> aircraft)
{
    cargoAircraft = aircraft;
}

void ControlTower::sendMessage(const std::string& message, IAircraft* sender)
{
    if (!sender) throw std::invalid_argument("Отправитель не может быть null");
    if (sender == passengerAircraft.get())
    {
        if (cargoAircraft) cargoAircraft->receive(message);
    }
    else if (sender == cargoAircraft.get())
    {
        if (passengerAircraft) passengerAircraft->receive(message);
    }
    else
    {
        throw std::runtime_error("Отправитель не зарегистрирован в диспетчерской вышке");
    }
}
