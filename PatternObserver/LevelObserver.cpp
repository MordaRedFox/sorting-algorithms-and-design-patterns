#include <iostream>
#include <string>
#include "LevelObserver.h"

void LevelObserver::update(const std::string& event, int value)
{
    if (event == "level") std::cout << "[LevelObserver] Уровень изменен на "
        << value << std::endl;
}
