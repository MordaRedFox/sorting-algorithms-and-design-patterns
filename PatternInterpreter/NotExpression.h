#pragma once
#include <memory>
#include "IExpression.h"
#include "Context.h"

/// <summary>
/// Нетерминальное выражение - логическое НЕ (!)
/// </summary>
class NotExpression : public IExpression
{
public:
    explicit NotExpression(std::shared_ptr<IExpression> operand);

    /// <summary>
    /// Интерпретирует выражение: вычисляет операнд и возвращает его отрицание
    /// </summary>
    bool interpret(Context& context) override final;

private:
    std::shared_ptr<IExpression> operand;
};
