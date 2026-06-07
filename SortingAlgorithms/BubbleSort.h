#pragma once
#include <vector>
#include <utility>

/// <summary>
/// Пузырьковая сортировка (Bubble Sort).
/// Последовательно сравниваются пары соседних элементов. Если они стоят в
/// неправильном порядке (левый больше правого), они меняются местами. После
/// каждого полного прохода самый большой элемент оказывается в конце массива.
/// Сложность в среднем: O(n²)
/// </summary>
template <typename T>
void bubbleSort(std::vector<T>& inputArray)
{
    const size_t n{ inputArray.size() };
    if (n <= 1) return;
    for (size_t i{ 0 }; i < n; i++)
    {
        bool swapped{ false };
        for (size_t j{ 0 }; j < n - i - 1; j++)
        {
            if (inputArray[j] > inputArray[j + 1])
            {
                std::swap(inputArray[j], inputArray[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
