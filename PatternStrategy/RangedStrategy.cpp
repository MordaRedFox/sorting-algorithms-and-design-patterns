#include <iostream>
#include <string>
#include "RangedStrategy.h"

void RangedStrategy::execute() const
{
    std::cout << "[RangedStrategy] Выпущена стрела (урон 10)" << std::endl;
}

std::string RangedStrategy::getName() const
{
    return "RangedStrategy";
}
