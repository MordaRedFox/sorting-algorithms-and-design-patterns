#pragma once
#include <memory>
#include "IHouseBuilder.h"
#include "House.h"

/// <summary>
/// Конкретный строитель - строитель элитного дома
/// </summary>
class LuxuryHouseBuilder : public IHouseBuilder
{
public:
    LuxuryHouseBuilder();

    /// <summary>
    /// Метод для указания типа стен в доме
    /// </summary>
    void buildWalls() override final;

    /// <summary>
    /// Метод для указания количества дверей в доме
    /// </summary>
    void buildDoors() override final;

    /// <summary>
    /// Метод для указания количества окон в доме
    /// </summary>
    void buildWindows() override final;

    /// <summary>
    /// Метод для указания типа крыши в доме
    /// </summary>
    void buildRoof() override final;

    /// <summary>
    /// Метод для указания, будет ли в доме гараж
    /// </summary>
    void buildGarage() override final;

    /// <summary>
    /// Метод для указания, будет ли в доме бассейн
    /// </summary>
    void buildSwimmingPool() override final;

    /// <summary>
    /// Метод для возврата готового и завершенного дома
    /// </summary>
    std::unique_ptr<House> getResult() override final;

private:
    /// <summary>
    /// Сбрасывает (обнуляет) все поля дома
    /// </summary>
    void reset();

    House house;
};
