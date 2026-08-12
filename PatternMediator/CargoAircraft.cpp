#include <iostream>
#include <stdexcept>
#include <memory>
#include <string>
#include "CargoAircraft.h"
#include "IAirTrafficControl.h"

void CargoAircraft::setControlTower(std::shared_ptr<IAirTrafficControl> newTower)
{
    tower = newTower;
}

void CargoAircraft::send(const std::string& message)
{
    auto tow{ tower.lock() };
    if (tow)
        tow->sendMessage(message, this);
    else
        throw std::runtime_error("Диспетчерская вышка не установлена или уже разрушена");
}

void CargoAircraft::receive(const std::string& message)
{
    std::cout << "Грузовой самолет получил: " << message << std::endl;
}
