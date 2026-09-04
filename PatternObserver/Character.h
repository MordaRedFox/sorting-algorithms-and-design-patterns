#pragma once
#include <memory>
#include <vector>
#include <string>
#include "ISubject.h"
#include "IObserver.h"

/// <summary>
/// Игровой персонаж - субъект, оповещающий наблюдателей об изменениях
/// </summary>
class Character : public ISubject
{
public:
    Character();
    virtual ~Character() = default;
    Character(const Character&) = delete;
    Character& operator=(const Character&) = delete;
    Character(Character&&) = default;
    Character& operator=(Character&&) = default;

    /// <summary>
    /// Подписать наблюдателя
    /// </summary>
    void attach(std::shared_ptr<IObserver> observer) override final;

    /// <summary>
    /// Отписать наблюдателя
    /// </summary>
    void detach(std::shared_ptr<IObserver> observer) override final;

    /// <summary>
    /// Уведомить всех подписанных наблюдателей
    /// </summary>
    void notify(const std::string& event, int value) override final;

    /// <summary>
    /// Выводит состояние в консоль
    /// </summary>
    void printState() const;

    // Сеттеры (триггерят уведомления)
    void setHealth(int health);
    void setLevel(int level);

private:
    int health;
    int level;
    std::vector<std::weak_ptr<IObserver>> observers;
};
