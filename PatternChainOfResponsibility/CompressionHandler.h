#pragma once
#include "IHandler.h"
#include "Message.h"

/// <summary>
/// Обработчик, сжимающий тело сообщения (добавляет маркер)
/// </summary>
class CompressionHandler : public IHandler
{
public:
    CompressionHandler() = default;
    ~CompressionHandler() = default;
    CompressionHandler(const CompressionHandler&) = default;
    CompressionHandler& operator=(const CompressionHandler&) = default;
    CompressionHandler(CompressionHandler&&) = default;
    CompressionHandler& operator=(CompressionHandler&&) = default;

    /// <summary>
    /// Сжимает тело, затем передает дальше
    /// </summary>
    void handle(Message& msg) override final;
};
