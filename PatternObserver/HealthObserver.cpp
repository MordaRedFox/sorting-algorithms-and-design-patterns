#include <iostream>
#include <string>
#include "HealthObserver.h"

void HealthObserver::update(const std::string& event, int value)
{
    if (event == "health") std::cout << "[HealthObserver] Здоровье изменено на "
        << value << std::endl;
}
