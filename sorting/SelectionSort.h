#pragma once
#include <vector>
#include <utility>

/// <summary>
/// Сортировка выбором (Selection Sort).
/// Массив делится на две части: отсортированную (слева) и неотсортированную
/// (справа). На каждом шаге в неотсортированной части ищется минимальный
/// элемент и перемещается в конец отсортированной части.
/// Сложность в среднем: O(n²)
/// </summary>
template <typename T>
void selectionSort(std::vector<T>& inputArray)
{
	const size_t n{ inputArray.size() };
	if (n <= 1) return;
	for (size_t i{ 0 }; i < n - 1; i++)
	{
		size_t minElementIndex{ i };
		for (size_t j{ i + 1 }; j < n; j++)
			if (inputArray[j] < inputArray[minElementIndex])
				minElementIndex = j;
		if (minElementIndex != i)
			std::swap(inputArray[i], inputArray[minElementIndex]);
	}
}
