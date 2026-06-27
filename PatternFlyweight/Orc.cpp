#include <iostream>
#include "Orc.h"

Orc::Orc() : model_("OrcModel"), texture_("OrcTexture") {}

void Orc::render(int x, int y) const
{
    std::cout << "Орк [модель: " << model_ << ", текстура: " << texture_
        << "] отрисован в позиции (" << x << ", " << y << ")" << std::endl;
}
