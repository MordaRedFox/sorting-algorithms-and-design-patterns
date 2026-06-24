#include <iostream>
#include <memory>
#include <clocale>
#include "Director.h"
#include "BrickHouseBuilder.h"
#include "LuxuryHouseBuilder.h"
#include "House.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Строитель\"" << std::endl;
    // Строительство кирпичного дома с гаражом через Director
    std::cout << std::endl << "--- Кирпичный дом с гаражом ---" << std::endl;
    BrickHouseBuilder brickBuilder;
    Director director;
    director.setBuilder(&brickBuilder);
    director.constructHouseWithGarage();
    std::unique_ptr<House> brickHouse{ brickBuilder.getResult() };
    brickHouse->showInfo();
    // Строительство элитного дома с бассейном (но без гаража)
    std::cout << std::endl << "--- Элитный дом с бассейном ---" << std::endl;
    LuxuryHouseBuilder luxuryBuilder;
    director.setBuilder(&luxuryBuilder);
    director.constructHouseWithPool();
    std::unique_ptr<House> luxuryPoolHouse{ luxuryBuilder.getResult() };
    luxuryPoolHouse->showInfo();
    // Демонстрация прямого использования строителя (без Director)
    std::cout << std::endl << "--- Прямое использование строителя ---"
        << std::endl;
    BrickHouseBuilder customBuilder;
    customBuilder.buildWalls();
    customBuilder.buildDoors();
    customBuilder.buildWindows();
    customBuilder.buildRoof();
    customBuilder.buildGarage();
    std::unique_ptr<House> customHouse{ customBuilder.getResult() };
    customHouse->showInfo();
    return 0;
}
