#pragma once

/// <summary>
/// Интерфейс итератора для обхода элементов коллекции
/// </summary>
template <typename T>
class IIterator
{
public:
    IIterator() = default;
    virtual ~IIterator() = default;
    IIterator(const IIterator&) = delete;
    IIterator& operator=(const IIterator&) = delete;
    IIterator(IIterator&&) = default;
    IIterator& operator=(IIterator&&) = default;

    /// <summary>
    /// Перемещает итератор к первому элементу
    /// </summary>
    virtual void first() = 0;

    /// <summary>
    /// Перемещает итератор к следующему элементу
    /// </summary>
    virtual void next() = 0;

    /// <summary>
    /// Проверяет, достигнут ли конец обхода
    /// </summary>
    virtual bool isDone() const = 0;

    /// <summary>
    /// Возвращает текущий элемент
    /// </summary>
    virtual T currentItem() const = 0;
};
