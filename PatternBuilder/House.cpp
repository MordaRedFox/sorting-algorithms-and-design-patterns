#include <iostream>
#include <string>
#include "House.h"

House::House() :
	walls(""),
	doors(0),
	windows(0),
	roof(""),
	garage(false),
	swimmingPool(false)
{}

void House::setWalls(const std::string& walls)
{
    this->walls = walls;
}

void House::setDoors(unsigned int doors)
{
    this->doors = doors;
}

void House::setWindows(unsigned int windows)
{
    this->windows = windows;
}

void House::setRoof(const std::string& roof)
{
    this->roof = roof;
}

void House::setGarage(bool garage)
{
    this->garage = garage;
}

void House::setSwimmingPool(bool swimmingPool)
{
    this->swimmingPool = swimmingPool;
}

void House::showInfo() const
{
	std::cout << "Информация о доме:" << std::endl;
	std::cout << "1. Стены типа: \"" << walls << "\"" << std::endl;
	std::cout << "2. Количество дверей - " << doors << std::endl;
	std::cout << "3. Количество окон - " << windows << std::endl;
	std::cout << "4. Крыша типа: \"" << roof << "\"" << std::endl;
	if (garage)
		std::cout << "5. Гараж есть" << std::endl;
	else
		std::cout << "5. Гаража нет" << std::endl;
	if (swimmingPool)
		std::cout << "6. Бассейн есть" << std::endl;
	else
		std::cout << "6. Бассейна нет" << std::endl;
}
