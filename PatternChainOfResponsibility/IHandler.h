#pragma once
#include <memory>
#include "Message.h"

/// <summary>
/// Интерфейс обработчика в цепочке обязанностей
/// </summary>
class IHandler
{
public:
    IHandler() = default;
    virtual ~IHandler() = default;
    IHandler(const IHandler&) = default;
    IHandler& operator=(const IHandler&) = default;
    IHandler(IHandler&&) = default;
    IHandler& operator=(IHandler&&) = default;

    /// <summary>
    /// Устанавливает следующего обработчика в цепочке
    /// </summary>
    void setNext(std::shared_ptr<IHandler> next);

    /// <summary>
    /// Обрабатывает сообщение. При необходимости передает управление дальше
    /// </summary>
    virtual void handle(Message& msg) = 0;

protected:
    std::shared_ptr<IHandler> nextHandler;
};
