#include <iostream>
#include "Message.h"
#include "LoggingHandler.h"

void LoggingHandler::handle(Message& msg)
{
    std::cout << "LoggingHandler: логирование" << std::endl;
    std::cout << "Заголовок: " << msg.title << std::endl;
    std::cout << "Тело: " << msg.body << std::endl;
    if (nextHandler) nextHandler->handle(msg);
}
