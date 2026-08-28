#pragma once
#include <memory>
#include <vector>
#include "IMemento.h"

/// <summary>
/// Хранитель истории (Caretaker) - управляет последовательностью
/// снимков состояния
/// </summary>
class GameHistory
{
public:
    GameHistory() = default;
    virtual ~GameHistory() = default;
    GameHistory(const GameHistory&) = delete;
    GameHistory& operator=(const GameHistory&) = delete;
    GameHistory(GameHistory&&) = default;
    GameHistory& operator=(GameHistory&&) = default;

    /// <summary>
    /// Добавляет снимок в историю
    /// </summary>
    void pushMemento(std::shared_ptr<IMemento> memento);

    /// <summary>
    /// Извлекает последний снимок (удаляя его из истории)
    /// </summary>
    std::shared_ptr<IMemento> popMemento();

    /// <summary>
    /// Проверяет, пуста ли история
    /// </summary>
    bool isEmpty() const;

private:
    std::vector<std::shared_ptr<IMemento>> history;
};
