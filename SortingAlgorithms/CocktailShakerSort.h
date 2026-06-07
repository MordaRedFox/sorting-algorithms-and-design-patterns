#pragma once
#include <vector>
#include <utility>

/// <summary>
/// Шейкерная сортировка (Cocktail Shaker Sort).
/// Улучшенная пузырьковая сортировка. Сначала делается итерация от начала
/// массива до конца, если левый элемент больше правого, то они меняются. Так
/// максимальный элемент оказывается в конце массива. Далее проход идет от
/// конца до начала и элементы меняются при необходимости. Так минимальный
/// элемент оказывается в начале массива. После каждой итерации область
/// прохода сужается.
/// Сложность в среднем: O(n²)
/// </summary>
template <typename T>
void cocktailShakerSort(std::vector<T>& inputArray)
{
    const size_t n{ inputArray.size() };
    if (n <= 1) return;
    size_t left{ 0 }, right{ n - 1 };
    while (left != right)
    {
        for (size_t i{ left }; i < right; i++)
            if (inputArray[i] > inputArray[i + 1])
                std::swap(inputArray[i], inputArray[i + 1]);
        right--;
        if (left == right) break;
        for (size_t i{ right }; i > left; i--)
            if (inputArray[i - 1] > inputArray[i])
                std::swap(inputArray[i - 1], inputArray[i]);
        left++;
    }
}
