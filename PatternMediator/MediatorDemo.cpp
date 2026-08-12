#include <iostream>
#include <memory>
#include <clocale>
#include "ControlTower.h"
#include "PassengerAircraft.h"
#include "CargoAircraft.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Посредник\""
        << std::endl << std::endl;
    // Создание диспетчерской вышки и воздушных судн
    auto tower{ std::make_shared<ControlTower>() };
    auto passengerPlane{ std::make_shared<PassengerAircraft>() };
    auto cargoPlane{ std::make_shared<CargoAircraft>() };
    // Регистрация судн в вышке и выдача ссылки на вышку
    tower->setPassengerAircraft(passengerPlane);
    tower->setCargoAircraft(cargoPlane);
    passengerPlane->setControlTower(tower);
    cargoPlane->setControlTower(tower);
    // Отправка сообщений
    passengerPlane->send("Запрос на посадку (рейс 101)");
    cargoPlane->send("Запрос на взлет (рейс 202)");
    return 0;
}
