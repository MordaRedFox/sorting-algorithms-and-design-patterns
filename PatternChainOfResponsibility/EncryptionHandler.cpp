#include <iostream>
#include "Message.h"
#include "EncryptionHandler.h"

void EncryptionHandler::handle(Message& msg)
{
    std::cout << "EncryptionHandler: шифрование" << std::endl;
    msg.body = "[Encrypted]" + msg.body + "[Encrypted]";
    std::cout << "Тело сообщения зашифровано" << std::endl;
    if (nextHandler) nextHandler->handle(msg);
}
