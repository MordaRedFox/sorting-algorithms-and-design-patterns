#pragma once
#include <string>

/// <summary>
/// Интерфейс наблюдателя, получающего уведомления от субъекта
/// </summary>
class IObserver
{
public:
    IObserver() = default;
    virtual ~IObserver() = default;
    IObserver(const IObserver&) = default;
    IObserver& operator=(const IObserver&) = default;
    IObserver(IObserver&&) = default;
    IObserver& operator=(IObserver&&) = default;

    /// <summary>
    /// Вызывается субъектом при изменении состояния
    /// </summary>
    virtual void update(const std::string& event, int value) = 0;
};
