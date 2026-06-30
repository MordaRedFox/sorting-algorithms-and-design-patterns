#include <iostream>
#include <string>
#include "SmsMessage.h"

SmsMessage::SmsMessage(std::string t, std::string m, unsigned int b)
	: title(t), message(m), byte(b) {}

void SmsMessage::sendMessage()
{
	std::cout << "Отправка sms сообщения..." << std::endl;
	std::cout << "Сообщение: " << message << std::endl;
	std::cout << "Сообщение весит: " << byte << " байт" << std::endl;
}

void SmsMessage::sendMessageWithTitle()
{
	std::cout << "Отправка sms сообщения..." << std::endl;
	std::cout << "Заголовок: " << title << std::endl;
	std::cout << "Сообщение: " << message << std::endl;
	std::cout << "Сообщение весит: " << byte << " байт" << std::endl;
}
