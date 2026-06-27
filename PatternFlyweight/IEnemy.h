#pragma once

/// <summary>
/// Интерфейс для врагов (легковесных объектов)
/// </summary>
class IEnemy
{
public:
    IEnemy() = default;
    virtual ~IEnemy() = default;
    IEnemy(const IEnemy&) = delete;
    IEnemy& operator=(const IEnemy&) = delete;
    IEnemy(IEnemy&&) = default;
    IEnemy& operator=(IEnemy&&) = default;

    /// <summary>
    /// Отрисовывает врага в заданной позиции
    /// </summary>
    virtual void render(int x, int y) const = 0;
};
