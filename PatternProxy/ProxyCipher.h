#pragma once
#include <memory>
#include "IMessage.h"

/// <summary>
/// Прокси для шифрования сообщения
/// </summary>
class ProxyCipher : public IMessage
{
public:
	ProxyCipher(std::unique_ptr<IMessage> msg);
	~ProxyCipher() = default;
	ProxyCipher(const ProxyCipher&) = delete;
	ProxyCipher& operator=(const ProxyCipher&) = delete;
	ProxyCipher(ProxyCipher&&) = default;
	ProxyCipher& operator=(ProxyCipher&&) = default;

	/// <summary>
	/// Отправляет обычное сообщение без заголовка с шифрованием
	/// </summary>
	void sendMessage() override final;

	/// <summary>
	/// Отправляет сообщение с заголовком с шифрованием
	/// </summary>
	void sendMessageWithTitle() override final;

private:
	std::unique_ptr<IMessage> message;
};
