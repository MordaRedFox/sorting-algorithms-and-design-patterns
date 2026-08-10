#pragma once
#include <memory>
#include <stdexcept>
#include "IIterator.h"
#include "ICollection.h"

/// <summary>
/// Конкретный итератор для обхода коллекции в обратном порядке
/// </summary>
template <typename T>
class ReverseIterator : public IIterator<T>
{
public:
    explicit ReverseIterator(std::shared_ptr<ICollection<T>> collection)
        : collection(collection), currentIndex(collection->size() - 1) {}

    /// <summary>
    /// Перемещает итератор к первому элементу в обратном порядке
    /// </summary>
    void first() override final
    {
        currentIndex = collection->size() - 1;
    }

    /// <summary>
    /// Перемещает итератор к следующему элементу
    /// </summary>
    void next() override final
    {
        if (!isDone()) --currentIndex;
    }

    /// <summary>
    /// Проверяет, достигнут ли конец обхода
    /// </summary>
    bool isDone() const override final
    {
        return currentIndex < 0;
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
