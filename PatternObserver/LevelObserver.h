#pragma once
#include <string>
#include "IObserver.h"

/// <summary>
/// Наблюдатель, выводящий сообщение при изменении уровня
/// </summary>
class LevelObserver : public IObserver
{
public:
    LevelObserver() = default;
    virtual ~LevelObserver() = default;
    LevelObserver(const LevelObserver& other) = default;
    LevelObserver& operator=(const LevelObserver& other) = default;
    LevelObserver(LevelObserver&& other) = default;
    LevelObserver& operator=(LevelObserver&& other) = default;

    /// <summary>
    /// Вызывается субъектом при изменении уровня
    /// </summary>
    void update(const std::string& event, int value) override;
};
