#pragma once
#include <memory>
#include "IIterator.h"

/// <summary>
/// Абстрактный интерфейс коллекции элементов
/// </summary>
template <typename T>
class ICollection : public std::enable_shared_from_this<ICollection<T>>
{
public:
    ICollection() = default;
    virtual ~ICollection() = default;
    ICollection(const ICollection&) = delete;
    ICollection& operator=(const ICollection&) = delete;
    ICollection(ICollection&&) = default;
    ICollection& operator=(ICollection&&) = default;

    /// <summary>
    /// Возвращает количество элементов в коллекции
    /// </summary>
    virtual int size() const = 0;

    /// <summary>
    /// Возвращает элемент по индексу
    /// </summary>
    virtual T get(int index) const = 0;

    /// <summary>
    /// Создает итератор для обхода в прямом порядке
    /// </summary>
    virtual std::shared_ptr<IIterator<T>> createIterator() = 0;

    /// <summary>
    /// Создает итератор для обхода в обратном порядке
    /// </summary>
    virtual std::shared_ptr<IIterator<T>> createReverseIterator() = 0;
};
