#pragma once
#include <string>
#include "IMessage.h"

/// <summary>
/// Конкретное сообщение - по электронной почте
/// </summary>
class EmailMessage : public IMessage
{
public:
	EmailMessage(std::string t, std::string m);
	~EmailMessage() = default;
	EmailMessage(const EmailMessage&) = default;
	EmailMessage& operator=(const EmailMessage&) = default;
	EmailMessage(EmailMessage&&) = default;
	EmailMessage& operator=(EmailMessage&&) = default;

	/// <summary>
	/// Отправляет обычное email сообщение без заголовка
	/// </summary>
	void sendMessage() override final;

	/// <summary>
	/// Отправляет сообщение email с заголовком
	/// </summary>
	void sendMessageWithTitle() override final;

private:
	std::string title;
	std::string message;
};
