#include <memory>
#include "AndExpression.h"
#include "IExpression.h"
#include "Context.h"

AndExpression::AndExpression(std::shared_ptr<IExpression> left,
    std::shared_ptr<IExpression> right) : left(left), right(right) {}

bool AndExpression::interpret(Context& context)
{
    return left->interpret(context) && right->interpret(context);
}
