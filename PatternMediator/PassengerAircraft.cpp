#include <iostream>
#include <stdexcept>
#include <memory>
#include <string>
#include "PassengerAircraft.h"
#include "IAirTrafficControl.h"

void PassengerAircraft::setControlTower(std::shared_ptr<IAirTrafficControl> newTower)
{
    tower = newTower;
}

void PassengerAircraft::send(const std::string& message)
{
    auto tow{ tower.lock() };
    if (tow)
        tow->sendMessage(message, this);
    else
        throw std::runtime_error("Диспетчерская вышка не установлена или уже разрушена");
}

void PassengerAircraft::receive(const std::string& message)
{
    std::cout << "Пассажирский самолет получил: " << message << std::endl;
}
