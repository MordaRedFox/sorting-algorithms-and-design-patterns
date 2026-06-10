#include <memory>
#include <utility>
#include "BrickHouseBuilder.h"
#include "House.h"

BrickHouseBuilder::BrickHouseBuilder()
{
    reset();
}

void BrickHouseBuilder::reset()
{
	house = House();
}

void BrickHouseBuilder::buildWalls()
{
	house.setWalls("кирпичные");
}

void BrickHouseBuilder::buildDoors()
{
    house.setDoors(1);
}

void BrickHouseBuilder::buildWindows()
{
    house.setWindows(4);
}

void BrickHouseBuilder::buildRoof()
{
    house.setRoof("черепичная");
}

void BrickHouseBuilder::buildGarage()
{
    house.setGarage(true);
}

void BrickHouseBuilder::buildSwimmingPool()
{
    house.setSwimmingPool(false);
}

std::unique_ptr<House> BrickHouseBuilder::getResult()
{
    auto result{ std::make_unique<House>(std::move(house)) };
    reset();
    return result;
}
