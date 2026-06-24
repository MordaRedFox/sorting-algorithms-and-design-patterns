#pragma once
#include <vector>
#include <memory>
#include "IShape.h"

/// <summary>
/// Составной компонент - группа фигур
/// </summary>
class Group : public IShape
{
public:
    Group() = default;
    ~Group() override = default;

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
    /// Выводит информацию о группе
    /// </summary>
    void showInfo(size_t indent = 0) const override final;

private:
    std::vector<std::shared_ptr<IShape>> children;
};
