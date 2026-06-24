#include <iostream>
#include <clocale>
#include "DataBaseConfig.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Одиночка\"" << std::endl << std::endl;
    std::cout <<"Создание единственного экземпляра базы данных и подключение к нему:"
        << std::endl;
    DataBaseConfig& config1{ DataBaseConfig::getInstance() };
    config1.setDatabaseSettings();
    config1.connectDatabase();
    std::cout << std::endl << "Попытка создать другой экзепляр:" << std::endl;
    DataBaseConfig& config2 = DataBaseConfig::getInstance();
    std::cout << "Адрес config1: " << &config1 << std::endl;
    std::cout << "Адрес config2: " << &config2 << std::endl;
    if (&config1 == &config2)
    {
        std::cout << std::endl << "Оба указателя ссылаются на один и тот же объект!"
            << std::endl;
        std::cout << "Это верное поведение для паттерна" << std::endl;
    }
    return 0;
}
