#pragma once

/// <summary>
/// Интерфейс, представляющий сообщение
/// </summary>
class IMessage
{
public:
	IMessage() = default;
	virtual ~IMessage() = default;
	IMessage(const IMessage&) = default;
	IMessage& operator=(const IMessage&) = default;
	IMessage(IMessage&&) = default;
	IMessage& operator=(IMessage&&) = default;

	/// <summary>
	/// Отправляет обычное сообщение без заголовка
	/// </summary>
	virtual void sendMessage() = 0;

	/// <summary>
	/// Отправляет сообщение с заголовком
	/// </summary>
	virtual void sendMessageWithTitle() = 0;
};
