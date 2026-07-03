#pragma once
#include "IHandler.h"
#include "Message.h"

/// <summary>
/// Обработчик, ограничивающий длину тела сообщения
/// </summary>
class LengthLimitHandler : public IHandler
{
public:
    explicit LengthLimitHandler(unsigned int maxLength = 100);
    ~LengthLimitHandler() = default;
    LengthLimitHandler(const LengthLimitHandler&) = default;
    LengthLimitHandler& operator=(const LengthLimitHandler&) = default;
    LengthLimitHandler(LengthLimitHandler&&) = default;
    LengthLimitHandler& operator=(LengthLimitHandler&&) = default;

    /// <summary>
    /// Обрезает тело сообщения до заданной длины, затем передает дальше
    /// </summary>
    void handle(Message& msg) override final;

private:
    unsigned int maxHandlerLength;
};
