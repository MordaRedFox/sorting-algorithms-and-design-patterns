#pragma once
#include <vector>

/// <summary>
/// Сортировка вставками (Insertion Sort).
/// Массив постепенно строится из отсортированной левой части. Берется
/// очередной ключевой элемент из неотсортированной части и вставляется в
/// правильную позицию в отсортированной части. При этом сначала большие
/// ключегого элементы в отсортированной части сдвигаются вправо.
/// Сложность в среднем: O(n²)
/// </summary>
template <typename T>
void insertionSort(std::vector<T>& inputArray)
{
    const size_t n{ inputArray.size() };
    if (n <= 1) return;
    for (size_t i{ 1 }; i < n; i++)
    {
        T key = inputArray[i];
        size_t j{ i };
        while (j > 0 && inputArray[j - 1] > key)
        {
            inputArray[j] = inputArray[j - 1];
            --j;
        }
        inputArray[j] = key;
    }
}
