#pragma once

/// <summary>
/// Получатель - устройство освещения с возможностью запроса состояния
/// </summary>
class Light
{
public:
    Light();

    /// <summary>
    /// Включает устройство освещения
    /// </summary>
    void on();

    /// <summary>
    /// Выключает устройство освещения
    /// </summary>
    void off();

    /// <summary>
    /// Устанавливает яркость света
    /// </summary>
    void dim(int level);

    // Геттеры
    bool getIsOn() const;
    int getBrightness() const;

private:
    bool isOn;
    int brightness;
};
