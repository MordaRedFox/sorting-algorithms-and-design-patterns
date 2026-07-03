#include <iostream>
#include "Message.h"
#include "LengthLimitHandler.h"

LengthLimitHandler::LengthLimitHandler(unsigned int maxLength)
    : maxHandlerLength(maxLength) {}

void LengthLimitHandler::handle(Message& msg)
{
    std::cout << "LengthLimitHandler: проверка длины" << std::endl;
    if (msg.body.length() > maxHandlerLength)
    {
        msg.body.resize(maxHandlerLength);
        std::cout << "Тело сообщения обрезано до " << maxHandlerLength
            << " символов" << std::endl;
    }
    else
    {
        std::cout << "Длина тела сообщения допустима." << std::endl;
    }
    if (nextHandler) nextHandler->handle(msg);
}
