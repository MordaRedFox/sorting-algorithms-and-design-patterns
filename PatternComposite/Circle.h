#pragma once
#include <memory>
#include "IShape.h"

/// <summary>
/// Конкретный листовой компонент - круг
/// </summary>
class Circle : public IShape
{
public:
    explicit Circle(double radius);
    ~Circle() override = default;

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
    /// Выводит информацию о круге
    /// </summary>
    void showInfo(size_t indent = 0) const override final;

private:
    double radius;
};
