#pragma once

/// <summary>
/// Целевой интерфейс, который ожидает клиентский код
/// </summary>
class ITarget
{
public:
    ITarget() = default;
    virtual ~ITarget() = default;
    ITarget(const ITarget&) = default;
    ITarget& operator=(const ITarget&) = default;
    ITarget(ITarget&&) = default;
    ITarget& operator=(ITarget&&) = default;

    /// <summary>
    /// Метод 1, который делает полезную работу
    /// </summary>
    virtual void doSomeJob1(int repeatCount) = 0;

    /// <summary>
    /// Метод 2, который делает полезную работу
    /// </summary>
    virtual void doSomeJob2() = 0;

    /// <summary>
    /// Метод 3, который делает полезную работу
    /// </summary>
    virtual void doSomeJob3() = 0;
};
