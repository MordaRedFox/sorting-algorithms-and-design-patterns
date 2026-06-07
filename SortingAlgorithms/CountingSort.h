#pragma once
#include <vector>
#include <type_traits>
#include <algorithm>

// Концепт: только беззнаковые целые типы
template <typename T>
concept Concept = std::is_integral_v<T> && std::is_unsigned_v<T>;

/// <summary>
/// Сортировка подсчетом (Counting Sort).
/// Работает только для целых беззнаковых типов (unsigned integers). Находит
/// максимальный элемент в массиве, затем создает вспомогательный массив
/// размером max+1, заполненный нулями. Подсчитывает количество вхождений
/// каждого значения. Восстанавливает отсортированный массив, записывая каждое
/// значение столько раз, сколько оно встретилось.
/// Сложность в среднем: O(n + K)
/// </summary>
template<Concept T>
void countingSort(std::vector<T>& inputArray)
{
    const size_t n{ inputArray.size() };
    if (n <= 1) return;
    T maxVal{ inputArray[0] };
    for (T value : inputArray)
        if (value > maxVal)
            maxVal = value;
    std::vector<size_t> helpArray(static_cast<size_t>(maxVal) + 1, 0);
    for (size_t i{ 0 }; i < n; i++)
        helpArray[inputArray[i]]++;
    std::vector<T> newArray;
    newArray.reserve(n);
    for (size_t value{ 0 }; value <= static_cast<size_t>(maxVal); value++)
        newArray.insert(newArray.end(), helpArray[value], static_cast<T>(value));
    inputArray = std::move(newArray);
}
