#include <memory>
#include "OrExpression.h"
#include "IExpression.h"
#include "Context.h"

OrExpression::OrExpression(std::shared_ptr<IExpression> left,
    std::shared_ptr<IExpression> right) : left(left), right(right) {}

bool OrExpression::interpret(Context& context)
{
    return left->interpret(context) || right->interpret(context);
}
