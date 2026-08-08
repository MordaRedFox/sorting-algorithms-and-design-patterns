#pragma once
#include <memory>
#include "IExpression.h"
#include "Context.h"

/// <summary>
/// Нетерминальное выражение - логическое ИЛИ (||)
/// </summary>
class OrExpression : public IExpression
{
public:
    OrExpression(std::shared_ptr<IExpression> left,
        std::shared_ptr<IExpression> right);

    /// <summary>
    /// Интерпретирует выражение: вычисляет левый и правый операнды и
    /// возвращает их логическое ИЛИ
    /// </summary>
    bool interpret(Context& context) override final;

private:
    std::shared_ptr<IExpression> left;
    std::shared_ptr<IExpression> right;
};
