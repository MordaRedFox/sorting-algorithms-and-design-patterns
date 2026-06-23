#pragma once
#include <memory>
#include "ITarget.h"
#include "Adaptee.h"

/// <summary>
/// Адаптер, преобразующий интерфейс класса Adaptee к ITarget
/// </summary>
class Adapter : public ITarget
{
public:
    Adapter();
    ~Adapter() override = default;
    Adapter(const Adapter&) = delete;
    Adapter& operator=(const Adapter&) = delete;
    Adapter(Adapter&&) = default;
    Adapter& operator=(Adapter&&) = default;

    /// <summary>
    /// Адаптирует метод 1, который делает полезную работу
    /// </summary>
    void doSomeJob1(int repeatCount) override final;

    /// <summary>
    /// Адаптирует метод 2, который делает полезную работу
    /// </summary>
    void doSomeJob2() override final;

    /// <summary>
    /// Адаптирует метод 3, который делает полезную работу
    /// </summary>
    void doSomeJob3() override final;

private:
    std::unique_ptr<Adaptee> adaptee;
};
