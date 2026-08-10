#pragma once
#include <memory>
#include <stdexcept>
#include "IIterator.h"
#include "ICollection.h"

/// <summary>
/// Конкретный итератор для обхода коллекции в прямом порядке
/// </summary>
template <typename T>
class ForwardIterator : public IIterator<T>
{
public:
    explicit ForwardIterator(std::shared_ptr<ICollection<T>> collection)
        : collection(collection), currentIndex(0) {}

    /// <summary>
    /// Перемещает итератор к первому элементу
    /// </summary>
    void first() override final
    {
        currentIndex = 0;
    }

    /// <summary>
    /// Перемещает итератор к следующему элементу
    /// </summary>
    void next() override final
    {
        if (!isDone()) ++currentIndex;
    }

    /// <summary>
    /// Проверяет, достигнут ли конец обхода
    /// </summary>
    bool isDone() const override final
    {
        return currentIndex >= collection->size();
    }

    /// <summary>
    /// Возвращает текущий элемент
    /// </summary>
    T currentItem() const override final
    {
        if (isDone()) throw std::runtime_error("Итератор вышел за границы");
        return collection->get(currentIndex);
    }

private:
    std::shared_ptr<ICollection<T>> collection;
    int currentIndex;
};
