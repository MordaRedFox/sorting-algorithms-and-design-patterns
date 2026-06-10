#pragma once
#include "AbstractHouseBuilder.h"

/// <summary>
/// Директор управляет процессом строительства, используя конкретного строителя
/// </summary>
class Director
{
public:
    Director();

    /// <summary>
    /// Устанавливает строителя, которым будет управлять директор
    /// </summary>
    void setBuilder(AbstractHouseBuilder* builder);

    /// <summary>
    /// Строит базовый дом (только стены, двери, окна, крыша)
    /// </summary>
    void constructBasicHouse();

    /// <summary>
    /// Строит полный дом с гаражом, но без бассейна
    /// </summary>
    void constructHouseWithGarage();

    /// <summary>
    /// Строит полный дом с бассейном, но без гаража
    /// </summary>
    void constructHouseWithPool();

    /// <summary>
    /// Строит полный дом с гаражом и бассейном
    /// </summary>
    void constructFullHouse();

private:
    AbstractHouseBuilder* builder;
};
