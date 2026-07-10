#include <iostream>
#include "Light.h"

Light::Light() : isOn(false), brightness(0) {}

void Light::on()
{
    isOn = true;
    brightness = 100;
    std::cout << "Свет включен" << std::endl;
}

void Light::off()
{
    isOn = false;
    brightness = 0;
    std::cout << "Свет выключен" << std::endl;
}

void Light::dim(int level)
{
    if (level < 0) level = 0;
    if (level > 100) level = 100;
    brightness = level;
    isOn = (level > 0);
    std::cout << "Яркость света установлена на " << level << "%" << std::endl;
}

bool Light::getIsOn() const { return isOn; }
int Light::getBrightness() const { return brightness; }
