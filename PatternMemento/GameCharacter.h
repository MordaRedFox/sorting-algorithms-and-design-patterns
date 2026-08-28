#pragma once
#include <memory>
#include "IMemento.h"

/// <summary>
/// Игровой персонаж - создатель (Originator), который умеет сохранять и
/// восстанавливать свое состояние
/// </summary>
class GameCharacter
{
public:
    GameCharacter();
    virtual ~GameCharacter() = default;
    GameCharacter(const GameCharacter&) = delete;
    GameCharacter& operator=(const GameCharacter&) = delete;
    GameCharacter(GameCharacter&&) = default;
    GameCharacter& operator=(GameCharacter&&) = default;

    /// <summary>
    /// Выводит текущее состояние в консоль
    /// </summary>
    void printState() const;

    /// <summary>
    /// Создает снимок текущего состояния
    /// </summary>
    std::shared_ptr<IMemento> createMemento() const;

    /// <summary>
    /// Восстанавливает состояние из снимка
    /// </summary>
    void restoreFromMemento(std::shared_ptr<IMemento> memento);

    // Сеттеры
    void setHealth(int health);
    void setPositionX(int positionX);
    void setPositionY(int positionY);
    void setLevel(int level);

private:
    int health;
    int positionX;
    int positionY;
    int level;

    /// <summary>
    /// Конкретный хранитель, имеющий доступ к состоянию персонажа
    /// </summary>
    class Memento : public IMemento
    {
    public:
        Memento(int health, int positionX, int positionY, int level);
        ~Memento() = default;
        Memento(const Memento&) = default;
        Memento& operator=(const Memento&) = default;
        Memento(Memento&&) = default;
        Memento& operator=(Memento&&) = default;

        // Геттеры
        int getHealth() const;
        int getPositionX() const;
        int getPositionY() const;
        int getLevel() const;

    private:
        int health;
        int positionX;
        int positionY;
        int level;
    };
};
