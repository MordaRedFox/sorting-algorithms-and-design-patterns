#pragma once
#include <string>

/// <summary>
/// Сообщение, которое обрабатывается в цепочке обязанностей
/// </summary>
class Message
{
public:
    Message(std::string t, std::string b);
    ~Message() = default;
    Message(const Message&) = default;
    Message& operator=(const Message&) = default;
    Message(Message&&) = default;
    Message& operator=(Message&&) = default;

    std::string title;
    std::string body;
};
