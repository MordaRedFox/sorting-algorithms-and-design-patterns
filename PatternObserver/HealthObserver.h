#pragma once
#include <string>
#include "IObserver.h"

/// <summary>
/// Наблюдатель, выводящий сообщение при изменении здоровья
/// </summary>
class HealthObserver : public IObserver
{
public:
    HealthObserver() = default;
    virtual ~HealthObserver() = default;
    HealthObserver(const HealthObserver& other) = default;
    HealthObserver& operator=(const HealthObserver& other) = default;
    HealthObserver(HealthObserver&& other) = default;
    HealthObserver& operator=(HealthObserver&& other) = default;
    
    /// <summary>
    /// Вызывается субъектом при изменении состояния здоровья
    /// </summary>
    void update(const std::string& event, int value) override;
};
