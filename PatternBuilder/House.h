#pragma once
#include <string>

/// <summary>
/// Сложный класс со множеством полей, представляющий один дом
/// </summary>
class House
{
public:
    House();
    ~House() = default;
    House(const House&) = delete;
    House& operator=(const House&) = delete;
    House(House&&) = default;
    House& operator=(House&&) = default;

    // Сеттеры
    void setWalls(const std::string& walls);
    void setDoors(unsigned int doors);
    void setWindows(unsigned int windows);
    void setRoof(const std::string& roof);
    void setGarage(bool garage);
    void setSwimmingPool(bool swimmingPool);
    void showInfo() const;

private:
    std::string walls;
    unsigned int doors;
    unsigned int windows;
    std::string roof;
    bool garage;
    bool swimmingPool;
};
