#pragma once
#include <vector>

/// <summary>
/// Слияние двух упорядоченных подмассивов. Создается временный буфер, куда
/// последовательно копируются элементы из левой и правой частей в порядке
/// возрастания. Если элементы равны, первым берется из левой части. После
/// заполнения буфера все его элементы копируются обратно в исходный массив
/// </summary>
template <typename T>
void merge(std::vector<T>& inputArray, size_t left, size_t mid, size_t right)
{
    std::vector<T> buffer(right - left + 1);
    size_t i{ left }, j{ mid + 1 }, k{ 0 };
    while (i <= mid && j <= right)
        buffer[k++] = (inputArray[i] <= inputArray[j]) ? inputArray[i++] : inputArray[j++];
    while (i <= mid)
        buffer[k++] = inputArray[i++];
    while (j <= right)
        buffer[k++] = inputArray[j++];
    for (size_t p{ 0 }; p < buffer.size(); p++)
        inputArray[left + p] = buffer[p];
}

/// <summary>
/// Рекурсивная сортировка слиянием для подмассива. Если отрезок содержит один
/// элемент или пуст, рекурсия завершается. Иначе находится середина,
/// рекурсивно сортируются левая и правая половины, после чего они сливаются
/// в один упорядоченный отрезок с помощью функции merge()
/// </summary>
template <typename T>
void mergeSort(std::vector<T>& inputArray, size_t left, size_t right)
{
    if (left >= right) return;
    size_t mid{ left + (right - left) / 2 };
    mergeSort(inputArray, left, mid);
    mergeSort(inputArray, mid + 1, right);
    merge(inputArray, left, mid, right);
}

/// <summary>
/// Сортировка слиянием (Merge Sort) — публичная функция-обертка.
/// Алгоритм «разделяй и властвуй»: массив рекурсивно делится пополам до
/// единичных элементов, затем последовательно сливается обратно, образуя
/// упорядоченные отрезки.
/// Сложность в среднем: O(n log n)
/// </summary>
template <typename T>
void mergeSort(std::vector<T>& inputArray)
{
    if (!inputArray.empty())
        mergeSort(inputArray, 0, inputArray.size() - 1);
}
