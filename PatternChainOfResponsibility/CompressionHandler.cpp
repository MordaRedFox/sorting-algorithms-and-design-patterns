#include <iostream>
#include "Message.h"
#include "CompressionHandler.h"

void CompressionHandler::handle(Message& msg)
{
    std::cout << "CompressionHandler: сжатие" << std::endl;
    msg.body = "[Compressed]" + msg.body;
    std::cout << "Тело сообщения сжато" << std::endl;
    if (nextHandler) nextHandler->handle(msg);
}
