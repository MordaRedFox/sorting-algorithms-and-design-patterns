#pragma once
#include "IHandler.h"
#include "Message.h"

/// <summary>
/// Обработчик, логирующий информацию о сообщении
/// </summary>
class LoggingHandler : public IHandler
{
public:
    LoggingHandler() = default;
    ~LoggingHandler() = default;
    LoggingHandler(const LoggingHandler&) = default;
    LoggingHandler& operator=(const LoggingHandler&) = default;
    LoggingHandler(LoggingHandler&&) = default;
    LoggingHandler& operator=(LoggingHandler&&) = default;

    /// <summary>
    /// Выводит заголовок и тело сообщения, затем передает дальше
    /// </summary>
    void handle(Message& msg) override final;
};
