#pragma once
#include <vector>
#include <utility>

/// <summary>
/// Быстрая сортировка (Quick Sort).
/// Выбирается опорный элемент (pivot) с использованием медианы из трех:
/// первый, средний и последний элементы. Это улучшает производительность
/// на частично отсортированных данных. Опорный элемент перемещается в конец
/// массива. Затем массив разбивается на две части: элементы меньше или равные
/// опорному перемещаются в левую часть, большие — в правую. После разбиения
/// опорный элемент помещается на свою окончательную позицию. Далее рекурсивно
/// сортируются левая и правая части
/// </summary>
template <typename T>
void quickSort(std::vector<T>& inputArray, size_t left, size_t right)
{
    if (left >= right) return;
    size_t middle{ left + (right - left) / 2 };
    if (inputArray[middle] < inputArray[left])
        std::swap(inputArray[left], inputArray[middle]);
    if (inputArray[right] < inputArray[left])
        std::swap(inputArray[left], inputArray[right]);
    if (inputArray[right] < inputArray[middle])
        std::swap(inputArray[middle], inputArray[right]);
    std::swap(inputArray[middle], inputArray[right]);
    T pivot{ inputArray[right] };
    size_t i{ left };
    for (size_t j{ left }; j < right; j++)
        if (inputArray[j] <= pivot)
        {
            std::swap(inputArray[i], inputArray[j]);
            i++;
        }
    std::swap(inputArray[i], inputArray[right]);
    if (i > left)
        quickSort(inputArray, left, i - 1);
    if (i + 1 < right)
        quickSort(inputArray, i + 1, right);
}

/// <summary>
/// Быстрая сортировка (Quick Sort) - публичная функция-обертка.
/// Запускает рекурсивную сортировку на всем массиве.
/// Сложность в среднем: O(n log n)
/// </summary>
template <typename T>
void quickSort(std::vector<T>& inputArray)
{
    if (!inputArray.empty())
        quickSort(inputArray, 0, inputArray.size() - 1);
}
