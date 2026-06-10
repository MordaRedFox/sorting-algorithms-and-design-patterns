#include <memory>
#include <utility>
#include "LuxuryHouseBuilder.h"
#include "House.h"

LuxuryHouseBuilder::LuxuryHouseBuilder()
{
    reset();
}

void LuxuryHouseBuilder::reset()
{
    house = House();
}

void LuxuryHouseBuilder::buildWalls()
{
    house.setWalls("каменные с утеплителем");
}

void LuxuryHouseBuilder::buildDoors()
{
    house.setDoors(3);
}

void LuxuryHouseBuilder::buildWindows()
{
    house.setWindows(12);
}

void LuxuryHouseBuilder::buildRoof()
{
    house.setRoof("стеклянный купол");
}

void LuxuryHouseBuilder::buildGarage()
{
    house.setGarage(true);
}

void LuxuryHouseBuilder::buildSwimmingPool()
{
    house.setSwimmingPool(true);
}

std::unique_ptr<House> LuxuryHouseBuilder::getResult()
{
    auto result{ std::make_unique<House>(std::move(house)) };
    reset();
    return result;
}
