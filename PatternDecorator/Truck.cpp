#include <iostream>
#include "Truck.h"

void Truck::drivingRoad()
{
	std::cout << "Грузовик едет по дороге" << std::endl;
}

void Truck::takePassengers(int count)
{
	std::cout << "В грузовике едет " << count << " пассажиров" << std::endl;
}
