#include <memory>
#include "NotExpression.h"
#include "IExpression.h"
#include "Context.h"

NotExpression::NotExpression(
    std::shared_ptr<IExpression> operand) : operand(operand) {}

bool NotExpression::interpret(Context& context)
{
    return !operand->interpret(context);
}
