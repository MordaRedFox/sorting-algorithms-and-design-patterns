#include <iostream>
#include "Skeleton.h"

Skeleton::Skeleton() : model_("SkeletonModel"), texture_("SkeletonTexture") {}

void Skeleton::render(int x, int y) const
{
    std::cout << "Скелет [модель: " << model_ << ", текстура: " << texture_
        << "] отрисован в позиции (" << x << ", " << y << ")" << std::endl;
}
