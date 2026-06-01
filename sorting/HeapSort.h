#pragma once
#include <vector>
#include <utility>

/// <summary>
/// Вспомогательная функция для поддержания свойства невозрастающей кучи
/// (max-heap). Предполагается, что левое и правое поддеревья узла root уже
/// являются правильными кучами. Чтобы добиться правильности, мы начинаем
/// построение кучи с последнего нелистового элемента и идем до вершины. Если
/// мы осортируем нижние элементы, то верхние будут сортироваться на основе
/// отсортированных нижних пирамид
/// </summary>
template <typename T>
void heapify(std::vector<T>& inputArray, int heapSize, int root)
{
    int largest{ root }, left{ 2 * root + 1 }, right{ 2 * root + 2 };
    if (left < heapSize && inputArray[left] > inputArray[largest])
        largest = left;
    if (right < heapSize && inputArray[right] > inputArray[largest])
        largest = right;
    if (largest != root)
    {
        std::swap(inputArray[root], inputArray[largest]);
        heapify(inputArray, heapSize, largest);
    }
}

/// <summary>
/// Пирамидальная сортировка (Heap Sort).
/// Сначала из исходного массива строится невозрастающая куча (max-heap). Для
/// этого последовательно применяется heapify ко всем внутренним узлам. Затем
/// максимальный элемент (корень кучи) обменивается с последним элементом,
/// размер кучи уменьшается на 1, и для нового корня восстанавливается
/// свойство кучи. Процесс повторяется, пока в куче не останется один элемент.
/// В результате массив оказывается отсортированным по возрастанию.
/// Сложность в среднем: O(n log n)
/// </summary>
template <typename T>
void heapSort(std::vector<T>& inputArray)
{
    const int n{ static_cast<int>(inputArray.size()) };
    if (n <= 1) return;
    for (int i{ n / 2 - 1 }; i >= 0; i--)
        heapify(inputArray, n, i);
    for (int i{ n - 1 }; i > 0; i--)
    {
        std::swap(inputArray[0], inputArray[i]);
        heapify(inputArray, i, 0);
    }
}
