#include <iostream>
#include <memory>
#include <utility>
#include "ProxyCipher.h"
#include "IMessage.h"

ProxyCipher::ProxyCipher(std::unique_ptr<IMessage> msg)
	: message(std::move(msg)) {}

void ProxyCipher::sendMessage()
{
	std::cout << "Шифрование сообщения..." << std::endl;
	if (message) message->sendMessage();
	std::cout << "Внимание! Сообщение зашифровано!" << std::endl;
}

void ProxyCipher::sendMessageWithTitle()
{
	std::cout << "Шифрование сообщения..." << std::endl;
	if (message) message->sendMessageWithTitle();
	std::cout << "Внимание! Сообщение зашифровано!" << std::endl;
}
