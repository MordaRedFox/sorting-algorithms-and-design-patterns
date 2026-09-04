#include <iostream>
#include <string>
#include "MeleeStrategy.h"

void MeleeStrategy::execute() const
{
    std::cout << "[MeleeStrategy] Нанесен удар мечом (урон 15)" << std::endl;
}

std::string MeleeStrategy::getName() const
{
    return "MeleeStrategy";
}
