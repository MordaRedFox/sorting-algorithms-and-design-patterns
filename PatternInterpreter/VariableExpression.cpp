#include <string>
#include "VariableExpression.h"
#include "Context.h"

VariableExpression::VariableExpression(const std::string& name) : name(name) {}

bool VariableExpression::interpret(Context& context)
{
    return context.getVariable(name);
}
