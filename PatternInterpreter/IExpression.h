#pragma once
#include "Context.h"

/// <summary>
/// Интерфейс всех выражений интерпретатора
/// </summary>
class IExpression
{
public:
    IExpression() = default;
    virtual ~IExpression() = default;
    IExpression(const IExpression&) = delete;
    IExpression& operator=(const IExpression&) = delete;
    IExpression(IExpression&&) = default;
    IExpression& operator=(IExpression&&) = default;

    /// <summary>
    /// Интерпретирует выражение в заданном контексте
    /// </summary>
    virtual bool interpret(Context& context) = 0;
};
