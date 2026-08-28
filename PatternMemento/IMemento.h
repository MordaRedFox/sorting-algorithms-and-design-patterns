#pragma once

/// <summary>
/// Интерфейс хранителя (Memento), предоставляющий общий тип для хранения
/// снимков состояния
/// </summary>
class IMemento
{
public:
    IMemento() = default;
    virtual ~IMemento() = default;
    IMemento(const IMemento&) = delete;
    IMemento& operator=(const IMemento&) = delete;
    IMemento(IMemento&&) = default;
    IMemento& operator=(IMemento&&) = default;
};
