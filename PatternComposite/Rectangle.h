#pragma once
#include "IShape.h"
#include <memory>

/// <summary>
/// Конкретный листовой компонент - прямоугольник
/// </summary>
class Rectangle : public IShape
{
public:
    Rectangle(double width, double height);
    ~Rectangle() override = default;

    /// <summary>
    /// Добавляет дочерний компонент (только для составных)
    /// </summary>
    void add(std::shared_ptr<IShape> child) override final;

    /// <summary>
    /// Удаляет дочерний компонент по индексу (только для составных)
    /// </summary>
    void remove(size_t index) override final;

    /// <summary>
    /// Возвращает дочерний компонент по индексу (только для составных)
    /// </summary>
    std::shared_ptr<IShape> getChild(size_t index) const override final;

    /// <summary>
    /// Выводит информацию о прямоугольнике
    /// </summary>
    void showInfo(size_t indent = 0) const override final;

private:
    double width;
    double height;
};
