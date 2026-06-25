#include "CarDecorator.h"

void CarDecorator::drivingRoad()
{
    if (component) component->drivingRoad();
}

void CarDecorator::takePassengers(int count)
{
    if (component) component->takePassengers(count);
}
