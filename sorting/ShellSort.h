#pragma once
#include <vector>

/// <summary>
/// Сортировка Шелла (Shell Sort).
/// Массив сортируется с убывающим шагом. Сначала сравниваются и обмениваются
/// элементы на расстоянии gap = n/2, затем gap /= 2 и так далее. Для каждого
/// gap выполняется сортировка вставками для подмассивов, составленных из
/// элементов, отстоящих на gap. На последнем шаге gap = 1 - обычная
/// сортировка вставками, но массив уже почти упорядочен.
/// Сложность в среднем: O(n²)
/// </summary>
template <typename T>
void shellSort(std::vector<T>& inputArray)
{
    const size_t n{ inputArray.size() };
    if (n <= 1) return;
    size_t gap{ static_cast<size_t>(n / 2) };
    while (gap > 0)
    {
        for (size_t i{ gap }; i < n; i++)
        {
            T key = inputArray[i];
            size_t j = i;
            while (j >= gap && inputArray[j - gap] > key)
            {
                inputArray[j] = inputArray[j - gap];
                j -= gap;
            }
            inputArray[j] = key;
        }
        gap /= 2;
    }
}
