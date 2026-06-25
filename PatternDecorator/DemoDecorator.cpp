#include <iostream>
#include <memory>
#include <clocale>
#include "Truck.h"
#include "LoggerDecorator.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Декоратор\"" << std::endl << std::endl;
    std::cout << "Обычный грузовик:" << std::endl;
    auto truck{ std::make_unique<Truck>() };
    truck->drivingRoad();
    truck->takePassengers(3);
    std::cout << std::endl << "С логированием:" << std::endl;
    auto logger{ std::make_unique<LoggerDecorator>(std::make_unique<Truck>()) };
    logger->drivingRoad();
    logger->takePassengers(5);
    std::cout << std::endl << "Двойное логирование (два декоратора):" << std::endl;
    auto doubleLogger{ std::make_unique<LoggerDecorator>(
        std::make_unique<LoggerDecorator>(std::make_unique<Truck>())
    ) };
    doubleLogger->drivingRoad();
    return 0;
}
