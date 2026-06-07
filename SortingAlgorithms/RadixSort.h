#pragma once
#include <vector>
#include <type_traits>
#include <algorithm>

// Концепт: только беззнаковые целые типы
template <typename T>
concept UnsignedIntegral = std::is_integral_v<T> && std::is_unsigned_v<T>;

/// <summary>
/// Вспомогательная функция: сортировка подсчетом для одного байта (разряда).
/// Используется внутри поразрядной сортировки. Устойчиво сортирует массив
/// на основе значения указанного байта каждого числа
/// </summary>
template<UnsignedIntegral T>
void countingSortByByte(std::vector<T>& inputArray, int digitByte)
{
    const size_t n{ inputArray.size() };
    if (n <= 1) return;
    const int BUCKETS{ 256 };
    std::vector<size_t> count(BUCKETS, 0);
    for (T val : inputArray)
    {
        int byteVal{ (val >> (8 * digitByte)) & 0xFF };
        count[byteVal]++;
    }
    for (size_t i{ 1 }; i < BUCKETS; i++)
        count[i] += count[i - 1];
    std::vector<T> output(n);
    for (size_t i{ n }; i--; )
    {
        int byteVal{ (inputArray[i] >> (8 * digitByte)) & 0xFF };
        output[--count[byteVal]] = inputArray[i];
    }
    inputArray = std::move(output);
}

/// <summary>
/// Поразрядная сортировка (Radix Sort).
/// Сортирует массив беззнаковых целых чисел, последовательно применяя
/// устойчивую сортировку подсчетом к каждому байту (начиная с младшего).
/// Количество обрабатываемых байтов определяется максимальным элементом.
/// Сложность в среднем: O(n log(maxVal))
/// </summary>
template<UnsignedIntegral T>
void radixSort(std::vector<T>& inputArray)
{
    if (inputArray.size() <= 1) return;
    T maxVal{ inputArray[0] };
    for (T value : inputArray)
        if (value > maxVal) maxVal = value;
    int maxBytes{ 0 };
    while (maxVal > 0)
    {
        maxBytes++;
        maxVal >>= 8;
    }
    if (maxBytes == 0) maxBytes = 1;
    for (int byte{ 0 }; byte < maxBytes; byte++)
        countingSortByByte(inputArray, byte);
}
