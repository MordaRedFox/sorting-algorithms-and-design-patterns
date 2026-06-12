#include <iostream>
#include <memory>
#include <string>
#include <windows.h>
#include <clocale>
#include "CarPrototype.h"
#include "MercedesGelandewagen.h"
#include "ToyotaCamry.h"

/// <summary>
/// Выводит информацию о автомобиле в удобном формате
/// </summary>
static void printCar(const CarPrototype& car, const std::string& label)
{
    std::cout << label << ": " << car.getBrand() << " " << car.getModel()
        << ", цвет: " << car.getColor() << ", цена: " << car.getPrice()
        << "$" << std::endl;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Прототип\"" << std::endl;
    // Создание оригинальных прототипов и вывод информации о них
    std::unique_ptr<CarPrototype> mercedesProto{
        std::make_unique<MercedesGelandewagen>() };
    std::unique_ptr<CarPrototype> toyotaProto{
        std::make_unique<ToyotaCamry>() };
    std::cout << std::endl << "Оригинальные прототипы" << std::endl;
    printCar(*mercedesProto, "Mercedes Gelandewagen");
    printCar(*toyotaProto, "Toyota Camry");
    std::cout << std::endl;
    // Клонирование прототипов
    auto mercedesClone1{ mercedesProto->clone() };
    auto mercedesClone2{ mercedesProto->clone() };
    auto toyotaClone{ toyotaProto->clone() };
    // Изменение клонированных прототипов
    mercedesClone1->setColor("Чёрный");
    mercedesClone1->setPrice(50000);
    mercedesClone2->setColor("Белый");
    mercedesClone2->setPrice(48000);
    toyotaClone->setColor("Красный");
    toyotaClone->setPrice(29000);
    std::cout << "Клоны Mercedes" << std::endl;
    printCar(*mercedesClone1, "Клон 1");
    printCar(*mercedesClone2, "Клон 2");
    std::cout << std::endl;
    std::cout << "Клон Toyota" << std::endl;
    printCar(*toyotaClone, "Клон");
    return 0;
}
