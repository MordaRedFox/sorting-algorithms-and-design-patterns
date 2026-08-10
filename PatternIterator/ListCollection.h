#pragma once
#include <list>
#include <memory>
#include <stdexcept>
#include <iterator>
#include "ICollection.h"
#include "ForwardIterator.h"
#include "ReverseIterator.h"
#include "IIterator.h"

/// <summary>
/// Конкретная коллекция на основе std::list
/// </summary>
template <typename T>
class ListCollection : public ICollection<T>
{
public:
    ListCollection() = default;
    explicit ListCollection(const std::list<T>& data) : data(data) {}

    /// <summary>
    /// Добавляет элемент в конец коллекции
    /// </summary>
    void add(const T& value)
    {
        data.push_back(value);
    }

    /// <summary>
    /// Возвращает количество элементов в коллекции
    /// </summary>
    int size() const override final
    {
        return static_cast<int>(data.size());
    }

    /// <summary>
    /// Возвращает элемент по индексу
    /// </summary>
    T get(int index) const override final
    {
        if (index < 0 || index >= static_cast<int>(data.size()))
            throw std::out_of_range("Индекс вне допустимого диапазона");
        auto it{ data.begin() };
        std::advance(it, index);
        return *it;
    }

    /// <summary>
    /// Создает итератор для обхода в прямом порядке
    /// </summary>
    std::shared_ptr<IIterator<T>> createIterator() override final
    {
        return std::make_shared<ForwardIterator<T>>(this->shared_from_this());
    }

    /// <summary>
    /// Создает итератор для обхода в обратном порядке
    /// </summary>
    std::shared_ptr<IIterator<T>> createReverseIterator() override final
    {
        return std::make_shared<ReverseIterator<T>>(this->shared_from_this());
    }

private:
    std::list<T> data;
};
