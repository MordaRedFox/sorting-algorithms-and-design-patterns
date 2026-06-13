#pragma once
#include <string>

/// <summary>
/// Класс, представляющий точку входа для связи с базой данных приложения
/// </summary>
class DataBaseConfig
{
public:
    DataBaseConfig(const DataBaseConfig&) = delete;
    DataBaseConfig& operator=(const DataBaseConfig&) = delete;
    DataBaseConfig(DataBaseConfig&&) = delete;
    DataBaseConfig& operator=(DataBaseConfig&&) = delete;

    /// <summary>
    /// Возвращает ссылку на единственный экземпляр класса
    /// </summary>
    static DataBaseConfig& getInstance();

    /// <summary>
    /// Метод, настраивающий параметры базы данных
    /// </summary>
    void setDatabaseSettings();

    /// <summary>
    /// Метод для создания подключения к базе данных
    /// </summary>
    void connectDatabase();

private:
    DataBaseConfig() = default;
    ~DataBaseConfig() = default;
    std::string data1;
    std::string data2;
    std::string data3;
};
