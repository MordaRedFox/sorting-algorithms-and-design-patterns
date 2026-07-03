#pragma once
#include "IHandler.h"
#include "Message.h"

/// <summary>
/// Обработчик, шифрующий тело сообщения (добавляет маркеры)
/// </summary>
class EncryptionHandler : public IHandler
{
public:
    EncryptionHandler() = default;
    ~EncryptionHandler() = default;
    EncryptionHandler(const EncryptionHandler&) = default;
    EncryptionHandler& operator=(const EncryptionHandler&) = default;
    EncryptionHandler(EncryptionHandler&&) = default;
    EncryptionHandler& operator=(EncryptionHandler&&) = default;

    /// <summary>
    /// Шифрует тело, затем передает дальше
    /// </summary>
    void handle(Message& msg) override final;
};
