#pragma once
#include <string>
#include "IEnemy.h"

/// <summary>
/// Конкретный класс «Скелет»
/// </summary>
class Skeleton : public IEnemy
{
public:
    Skeleton();

    /// <summary>
    /// Отрисовывает врага в заданной позиции
    /// </summary>
    void render(int x, int y) const override final;

private:
    std::string model_;
    std::string texture_;
};
