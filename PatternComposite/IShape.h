#pragma once
#include <memory>

/// <summary>
/// Интерфейс компонента. Представляет как простые, так и составные фигуры
/// </summary>
class IShape
{
public:
    IShape() = default;
    virtual ~IShape() = default;
    IShape(const IShape&) = delete;
    IShape& operator=(const IShape&) = delete;
    IShape(IShape&&) = default;
    IShape& operator=(IShape&&) = default;

    /// <summary>
    /// Добавляет дочерний компонент (только для составных)
    /// </summary>
    virtual void add(std::shared_ptr<IShape> child) = 0;

    /// <summary>
    /// Удаляет дочерний компонент по индексу (только для составных)
    /// </summary>
    virtual void remove(size_t index) = 0;

    /// <summary>
    /// Возвращает дочерний компонент по индексу (только для составных)
    /// </summary>
    virtual std::shared_ptr<IShape> getChild(size_t index) const = 0;

    /// <summary>
    /// Выводит информацию о фигуре и её дочерних элементах (рекурсивно)
    /// </summary>
    virtual void showInfo(size_t indent = 0) const = 0;
};
