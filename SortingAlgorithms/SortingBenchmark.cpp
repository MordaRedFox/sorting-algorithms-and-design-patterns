#pragma comment(linker, "/STACK:16777216")
#include <iostream>
#include <iomanip>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
#include <cassert>
#include <functional>
#include <string>
#include <ratio>
#include <ios>
#include <clocale>
#include <windows.h>
#include <utility>
// Кастомные сортировки
#include "BubbleSort.h"
#include "CocktailShakerSort.h"
#include "CountingSort.h"
#include "HeapSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "RadixSort.h"
#include "SelectionSort.h"
#include "ShellSort.h"
#include "TimSort.h"

using DataType = unsigned int;
using SortingVectorType = std::vector<std::pair<std::string, std::function<
    void(std::vector<DataType>&)>>>;
using PatternType = std::vector<std::pair<std::string, std::function<
    std::vector<DataType>(size_t)>>>;

/// <summary>
/// Генерирует случайный массив из неотрицательных чисел
/// </summary>
static std::vector<DataType> generateRandom(size_t size, DataType maxValue = 10000)
{
    static std::mt19937 range{ static_cast<DataType>(
        std::chrono::steady_clock::now().time_since_epoch().count()) };
    std::uniform_int_distribution<DataType> dist(0, maxValue);
    std::vector<DataType> data(size);
    for (auto& x : data)
        x = dist(range);
    return data;
}

/// <summary>
/// Генерирует случайный отсортированный массив из неотрицательных чисел
/// </summary>
static std::vector<DataType> generateSorted(size_t size)
{
    std::vector<DataType> data{ generateRandom(size) };
    std::sort(data.begin(), data.end());
    return data;
}

/// <summary>
/// Генерирует случайный отсортированный в обратном порядке массив из
/// неотрицательных чисел
/// </summary>
static std::vector<DataType> generateReverseSorted(size_t size)
{
    std::vector<DataType> data{ generateSorted(size) };
    std::reverse(data.begin(), data.end());
    return data;
}

/// <summary>
/// Генерирует массив из одинакового неотрицательного числа
/// </summary>
static std::vector<DataType> generateConstant(size_t size, DataType value = 42)
{
    return std::vector<DataType>(size, value);
}

/// <summary>
/// Выполняет сортировку runs раз на копии исходного массива, возвращает
/// среднее время в микросекундах
/// </summary>
static double benchmark(const std::function<void(std::vector<DataType>&)>& sortFunc,
    const std::vector<DataType>& original, int runs = 3)
{
    double totalMicro{ 0.0 };
    for (size_t i{ 0 }; i < runs; i++)
    {
        std::vector<DataType> data{ original };
        auto startTime{ std::chrono::high_resolution_clock::now() };
        sortFunc(data);
        auto endTime{ std::chrono::high_resolution_clock::now() };
        assert(std::is_sorted(data.begin(), data.end()));
        totalMicro += std::chrono::duration<double, std::micro>{
            endTime - startTime }.count();
    }
    return totalMicro / runs;
}

/// <summary>
/// Структура для вывода результатов
/// </summary>
struct TestCase
{
    std::string pattern;
    size_t size;
    std::string sortName;
    double timeMicro;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::setlocale(LC_ALL, "Russian");

    std::vector<size_t> sizes{ 500, 1000, 2000 };
    int runsPerBench{ 3 };
    // Универсальные сортировки
    SortingVectorType universalSorts
    {
        { "Пузырьковая",        [](auto& v) { bubbleSort(v); } },
        { "Шейкерная",          [](auto& v) { cocktailShakerSort(v); } },
        { "Пирамидальная",      [](auto& v) { heapSort(v); } },
        { "Вставками",          [](auto& v) { insertionSort(v); } },
        { "Слиянием",           [](auto& v) { mergeSort(v); } },
        { "Быстрая",            [](auto& v) { quickSort(v); } },
        { "Выбором",            [](auto& v) { selectionSort(v); } },
        { "Шелла",              [](auto& v) { shellSort(v); } },
        { "Timsort",            [](auto& v) { timSort(v); } }
    };
    // Специализированные сортировки (только для беззнаковых целых)
    SortingVectorType specializedSorts
    {
        { "Подсчётом",          [](auto& v) { countingSort(v); } },
        { "Поразрядная",        [](auto& v) { radixSort(v); } }
    };
    // Все сортировки
    SortingVectorType allSorts;
    allSorts.insert(allSorts.end(), universalSorts.begin(), universalSorts.end());
    allSorts.insert(allSorts.end(), specializedSorts.begin(), specializedSorts.end());
    // Паттерны данных для сортировок
    PatternType generators
    {
        { "Случайный",          [](size_t n) { return generateRandom(n); } },
        { "Отсортированный",    [](size_t n) { return generateSorted(n); } },
        { "Обратный порядок",   [](size_t n) { return generateReverseSorted(n); } },
        { "Постоянный",         [](size_t n) { return generateConstant(n); } }
    };
    // Прогон всех тестов для сортировок
    std::vector<TestCase> results;
    for (auto& [patternName, genFunc] : generators)
    {
        for (size_t n : sizes)
        {
            std::vector<DataType> original{ genFunc(n) };
            for (auto& [sortName, sortFunc] : allSorts)
            {
                double avgTime{ benchmark(sortFunc, original, runsPerBench) };
                results.push_back({ patternName, n, sortName, avgTime });
                std::cout << ".";
                std::cout.flush();
            }
        }
        std::cout << " выполнено!\n";
    }

    std::cout << "\n\nРезультаты бенчмарка(среднее время в микросекундах, "
        << runsPerBench << " прогона)\n";
    std::cout << std::string(75, '=') << "\n";
    std::cout << std::left << std::setw(22) << "Алгоритм"
        << std::setw(14) << "Размер"
        << std::setw(20) << "Паттерн"
        << std::right << std::setw(16) << "Время (мкс)" << "\n";
    std::cout << std::string(75, '-') << "\n";
    for (const auto& res : results)
    {
        std::cout << std::left << std::setw(22) << res.sortName
            << std::setw(14) << res.size
            << std::setw(20) << res.pattern
            << std::right << std::fixed << std::setprecision(2)
            << std::setw(16) << res.timeMicro << "\n";
    }
    std::cout << "\n\nСводка по самым быстрым универсальным алгоритмам\n";
    std::cout << std::string(75, '=') << "\n";
    for (auto& [patternName, genFunc] : generators)
    {
        std::cout << "\nПаттерн: " << patternName << "\n";
        std::cout << std::string(75, '-') << "\n";
        for (size_t n : sizes)
        {
            double bestTime{ 1e18 };
            std::string bestName;
            for (auto& [sortName, sortFunc] : universalSorts)
            {
                std::vector<DataType> original{ genFunc(n) };
                double t{ benchmark(sortFunc, original, runsPerBench) };
                if (t < bestTime)
                {
                    bestTime = t;
                    bestName = sortName;
                }
            }
            std::cout << "  Размер " << std::setw(6) << n << " элементов "
                << std::right << std::setw(10) << bestName
                << std::right << " (" << std::fixed << std::setprecision(2)
                << bestTime << " мкс)\n";
        }
        std::cout << "\n";
    }
    return 0;
}
