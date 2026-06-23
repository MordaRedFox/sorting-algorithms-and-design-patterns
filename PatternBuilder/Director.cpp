#include "Director.h"
#include "IHouseBuilder.h"

Director::Director() : builder(nullptr) {}

void Director::setBuilder(IHouseBuilder* builder)
{
    this->builder = builder;
}

void Director::constructBasicHouse()
{
    if (builder != nullptr)
    {
        builder->buildWalls();
        builder->buildDoors();
        builder->buildWindows();
        builder->buildRoof();
    }
}

void Director::constructHouseWithGarage()
{
    if (builder != nullptr)
    {
        builder->buildWalls();
        builder->buildDoors();
        builder->buildWindows();
        builder->buildRoof();
        builder->buildGarage();
    }
}

void Director::constructHouseWithPool()
{
    if (builder != nullptr)
    {
        builder->buildWalls();
        builder->buildDoors();
        builder->buildWindows();
        builder->buildRoof();
        builder->buildSwimmingPool();
    }
}

void Director::constructFullHouse()
{
    if (builder != nullptr)
    {
        builder->buildWalls();
        builder->buildDoors();
        builder->buildWindows();
        builder->buildRoof();
        builder->buildGarage();
        builder->buildSwimmingPool();
    }
}
