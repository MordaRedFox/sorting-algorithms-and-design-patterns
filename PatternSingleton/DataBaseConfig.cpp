#include <iostream>
#include "DataBaseConfig.h"

DataBaseConfig& DataBaseConfig::getInstance()
{
    static DataBaseConfig instance;
    return instance;
}

void DataBaseConfig::setDatabaseSettings()
{
    std::cout << "Были применены настройки базы данных" << std::endl;
}

void DataBaseConfig::connectDatabase()
{
    std::cout << "Создано подключение к базе данных" << std::endl;
}
