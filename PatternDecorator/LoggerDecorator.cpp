#include <iostream>
#include "LoggerDecorator.h"
#include "CarDecorator.h"

void LoggerDecorator::drivingRoad()
{
    std::cout << "[LOG] Перед вызовом drivingRoad()" << std::endl;
    CarDecorator::drivingRoad();
    std::cout << "[LOG] После вызова drivingRoad()" << std::endl;
}

void LoggerDecorator::takePassengers(int count)
{
    std::cout << "[LOG] Перед вызовом takePassengers(int count)" << std::endl;
    CarDecorator::takePassengers(count);
    std::cout << "[LOG] После вызова takePassengers(int count)" << std::endl;
}
