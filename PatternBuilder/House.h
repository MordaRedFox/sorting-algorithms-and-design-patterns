#pragma once
#include <string>

/// <summary>
/// Сложный класс со множеством полей, представляющий один дом
/// </summary>
class House
{
public:
    House();

    /// <summary>
    /// Сеттер для поля Стены
    /// </summary>
    void setWalls(const std::string& walls);

    /// <summary>
    /// Сеттер для поля Двери
    /// </summary>
    void setDoors(unsigned int doors);

    /// <summary>
    /// Сеттер для поля Окна
    /// </summary>
    void setWindows(unsigned int windows);

    /// <summary>
    /// Сеттер для поля Крыша
    /// </summary>
    void setRoof(const std::string& roof);

    /// <summary>
    /// Сеттер для поля Гараж
    /// </summary>
    void setGarage(bool garage);

    /// <summary>
    /// Сеттер для поля Бассейн
    /// </summary>
    void setSwimmingPool(bool swimmingPool);

    /// <summary>
    /// Выводит полную информацию о доме и о всех его полях
    /// </summary>
    void showInfo() const;

private:
    std::string walls;
    unsigned int doors;
    unsigned int windows;
    std::string roof;
    bool garage;
    bool swimmingPool;
};
