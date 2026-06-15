#pragma once

/// <summary>
/// Адаптируемый класс с несовместимым интерфейсом
/// </summary>
class AdapteeInterface
{
public:
    /// <summary>
    /// Метод 1 с параметром (для наглядности)
    /// </summary>
    void doSomeSpecificJob1(int times);

    /// <summary>
    /// Метод 2 без параметров
    /// </summary>
    void doSomeSpecificJob2();

    /// <summary>
    /// Метод 3 без параметров
    /// </summary>
    void doSomeSpecificJob3();
};
