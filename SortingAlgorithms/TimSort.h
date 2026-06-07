#pragma once
#include <vector>
#include <algorithm>
#include "InsertionSort.h"
#include "MergeSort.h"

/// <summary>
/// Адаптер: сортировка вставками подмассива [left, right]. Для minrun
/// (обычно 32-64) дополнительные затраты пренебрежимо малы
/// </summary>
template <typename T>
void insertionSortRange(std::vector<T>& inputArray, size_t left, size_t right)
{
    std::vector<T> sub(inputArray.begin() + left, inputArray.begin() + right + 1);
    insertionSort(sub);
    std::copy(sub.begin(), sub.end(), inputArray.begin() + left);
}

/// <summary>
/// Структура run: начало и длина
/// </summary>
struct Run
{
    size_t start;
    size_t length;
};

/// <summary>
/// Вычисление minrun по правилам Timsort
/// </summary>
static size_t computeMinrun(size_t n)
{
    size_t r{ 0 };
    while (n >= 64)
    {
        r |= (n & 1);
        n >>= 1;
    }
    return n + r;
}

/// <summary>
/// Поиск естественного run
/// </summary>
template <typename T>
size_t findRun(std::vector<T>& inputArray, size_t start, size_t n)
{
    size_t end{ start };
    if (end + 1 < n && inputArray[end] > inputArray[end + 1])
    {
        while (end + 1 < n && inputArray[end] > inputArray[end + 1])
            ++end;
        std::reverse(inputArray.begin() + start, inputArray.begin() + end + 1);
    }
    else
    {
        while (end + 1 < n && inputArray[end] <= inputArray[end + 1])
            ++end;
    }
    return end - start + 1;
}

/// <summary>
/// Слияние run из стека по правилам Timsort
/// </summary>
template <typename T>
void mergeCollapse(std::vector<Run>& runs, std::vector<T>& inputArray)
{
    while (runs.size() > 1)
    {
        size_t n{ runs.size() };
        if (n >= 3 && runs[n - 3].length <= runs[n - 2].length + runs[n - 1].length)
        {
            if (runs[n - 3].length < runs[n - 1].length)
            {
                merge(inputArray,
                    runs[n - 2].start,
                    runs[n - 2].start + runs[n - 2].length - 1,
                    runs[n - 1].start + runs[n - 1].length - 1);
                runs[n - 2].length += runs[n - 1].length;
                runs.pop_back();
            }
            else
            {
                merge(inputArray,
                    runs[n - 3].start,
                    runs[n - 3].start + runs[n - 3].length - 1,
                    runs[n - 2].start + runs[n - 2].length - 1);
                runs[n - 3].length += runs[n - 2].length;
                runs.erase(runs.begin() + n - 2);
            }
        }
        else if (n >= 2 && runs[n - 2].length <= runs[n - 1].length)
        {
            merge(inputArray,
                runs[n - 2].start,
                runs[n - 2].start + runs[n - 2].length - 1,
                runs[n - 1].start + runs[n - 1].length - 1);
            runs[n - 2].length += runs[n - 1].length;
            runs.pop_back();
        }
        else
            break;
    }
}

/// <summary>
/// Timsort – гибридная стабильная сортировка.
/// Сложность в среднем: O(n log n)
/// </summary>
template <typename T>
void timSort(std::vector<T>& inputArray)
{
    const size_t n{ inputArray.size() };
    if (n <= 1) return;
    const size_t minrun{ computeMinrun(n) };
    std::vector<Run> runs;
    size_t current{ 0 };
    while (current < n)
    {
        size_t runLen{ findRun(inputArray, current, n) };
        if (runLen < minrun && current + runLen < n)
        {
            size_t end{ (std::min)(current + minrun - 1, n - 1) };
            insertionSortRange(inputArray, current, end);
            runLen = end - current + 1;
        }
        runs.push_back({ current, runLen });
        current += runLen;
        mergeCollapse(runs, inputArray);
    }
    while (runs.size() > 1)
    {
        size_t m{ runs.size() };
        merge(inputArray,
            runs[m - 2].start,
            runs[m - 2].start + runs[m - 2].length - 1,
            runs[m - 1].start + runs[m - 1].length - 1);
        runs[m - 2].length += runs[m - 1].length;
        runs.pop_back();
    }
}
