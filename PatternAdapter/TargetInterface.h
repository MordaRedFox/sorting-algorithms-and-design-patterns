#pragma once

/// <summary>
/// Целевой интерфейс, который ожидает клиентский код
/// </summary>
class TargetInterface
{
public:
    TargetInterface() = default;
    virtual ~TargetInterface() = default;
    TargetInterface(const TargetInterface&) = default;
    TargetInterface& operator=(const TargetInterface&) = default;
    TargetInterface(TargetInterface&&) = default;
    TargetInterface& operator=(TargetInterface&&) = default;

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
