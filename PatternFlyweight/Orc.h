#pragma once
#include <string>
#include "IEnemy.h"

/// <summary>
/// Конкретный класс «Орк»
/// </summary>
class Orc : public IEnemy
{
public:
    Orc();

    /// <summary>
    /// Отрисовывает врага в заданной позиции
    /// </summary>
    void render(int x, int y) const override final;

private:
    std::string model_;
    std::string texture_;
};
