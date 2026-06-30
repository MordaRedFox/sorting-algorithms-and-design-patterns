#include <iostream>
#include <string>
#include "EmailMessage.h"

EmailMessage::EmailMessage(std::string t, std::string m)
	: title(t), message(m) {}

void EmailMessage::sendMessage()
{
	std::cout << "Отправка email сообщения..." << std::endl;
	std::cout << "Сообщение: " << message << std::endl;
}

void EmailMessage::sendMessageWithTitle()
{
	std::cout << "Отправка email сообщения..." << std::endl;
	std::cout << "Заголовок: " << title << std::endl;
	std::cout << "Сообщение: " << message << std::endl;
}
