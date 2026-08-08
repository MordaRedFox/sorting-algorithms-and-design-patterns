#pragma once
#include <memory>
#include "IExpression.h"
#include "Context.h"

/// <summary>
/// Нетерминальное выражение - логическое И (&&)
/// </summary>
class AndExpression : public IExpression
{
public:
    AndExpression(std::shared_ptr<IExpression> left,
        std::shared_ptr<IExpression> right);

    /// <summary>
    /// Интерпретирует выражение: вычисляет левый и правый операнды и
    /// возвращает их логическое И
    /// </summary>
    bool interpret(Context& context) override final;

private:
    std::shared_ptr<IExpression> left;
    std::shared_ptr<IExpression> right;
};
