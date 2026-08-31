#pragma once
#include <memory>
#include <string>
#include "IObserver.h"

/// <summary>
/// Интерфейс субъекта, который может управлять подпиской наблюдателей
/// </summary>
class ISubject
{
public:
    ISubject() = default;
    virtual ~ISubject() = default;
    ISubject(const ISubject&) = delete;
    ISubject& operator=(const ISubject&) = delete;
    ISubject(ISubject&&) = default;
    ISubject& operator=(ISubject&&) = default;

    /// <summary>
    /// Подписать наблюдателя
    /// </summary>
    virtual void attach(std::shared_ptr<IObserver> observer) = 0;

    /// <summary>
    /// Отписать наблюдателя
    /// </summary>
    virtual void detach(std::shared_ptr<IObserver> observer) = 0;

    /// <summary>
    /// Уведомить всех подписанных наблюдателей
    /// </summary>
    virtual void notify(const std::string& event, int value) = 0;
};
