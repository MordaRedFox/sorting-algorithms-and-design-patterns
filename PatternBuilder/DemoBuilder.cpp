#include <iostream>
#include <memory>
#include <windows.h>
#include <clocale>
#include "Director.h"
#include "BrickHouseBuilder.h"
#include "LuxuryHouseBuilder.h"
#include "House.h"

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация строителя" << std::endl;
    // 1. Строительство кирпичного дома с гаражом через Director
    std::cout << "\n--- Кирпичный дом с гаражом ---" << std::endl;
    BrickHouseBuilder brickBuilder;
    Director director;
    director.setBuilder(&brickBuilder);
    director.constructHouseWithGarage();
    std::unique_ptr<House> brickHouse{ brickBuilder.getResult() };
    brickHouse->showInfo();
    // 2. Строительство элитного дома с бассейном (но без гаража)
    std::cout << "\n--- Элитный дом с бассейном ---" << std::endl;
    LuxuryHouseBuilder luxuryBuilder;
    director.setBuilder(&luxuryBuilder);
    director.constructHouseWithPool();
    std::unique_ptr<House> luxuryPoolHouse{ luxuryBuilder.getResult() };
    luxuryPoolHouse->showInfo();
    // 4. Демонстрация прямого использования строителя (без Director)
    std::cout << "\n--- Прямое использование строителя ---" << std::endl;
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
