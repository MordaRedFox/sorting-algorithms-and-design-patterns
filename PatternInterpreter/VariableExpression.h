#pragma once
#include <string>
#include "IExpression.h"
#include "Context.h"

/// <summary>
/// Терминальное выражение - переменная, значение которой извлекается из контекста
/// </summary>
class VariableExpression : public IExpression
{
public:
    explicit VariableExpression(const std::string& name);

    /// <summary>
    /// Возвращает значение переменной с именем name из переданного контекста
    /// </summary>
    bool interpret(Context& context) override final;

private:
    std::string name;
};
