#pragma once
#include <string>
#include "IMessage.h"

/// <summary>
/// Конкретное сообщение - по sms
/// </summary>
class SmsMessage : public IMessage
{
public:
	SmsMessage(std::string t, std::string m, unsigned int b);
	~SmsMessage() = default;
	SmsMessage(const SmsMessage&) = default;
	SmsMessage& operator=(const SmsMessage&) = default;
	SmsMessage(SmsMessage&&) = default;
	SmsMessage& operator=(SmsMessage&&) = default;

	/// <summary>
	/// Отправляет обычное sms сообщение без заголовка
	/// </summary>
	void sendMessage() override final;

	/// <summary>
	/// Отправляет сообщение sms с заголовком
	/// </summary>
	void sendMessageWithTitle() override final;

private:
	std::string title;
	std::string message;
	unsigned int byte;
};
