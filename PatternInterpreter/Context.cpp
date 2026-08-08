#include <string>
#include <stdexcept>
#include "Context.h"

void Context::setVariable(const std::string& name, bool value)
{
    variables[name] = value;
}

bool Context::getVariable(const std::string& name) const
{
    auto it = variables.find(name);
    if (it != variables.end()) return it->second;
    throw std::runtime_error("Переменная не найдена: " + name);
}
