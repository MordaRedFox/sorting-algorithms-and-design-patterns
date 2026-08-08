#pragma once
#include <string>
#include <unordered_map>

/// <summary>
/// Контекст интерпретации - содержит значения переменных
/// </summary>
class Context
{
public:
    Context() = default;
    ~Context() = default;
    Context(const Context&) = default;
    Context& operator=(const Context&) = default;
    Context(Context&&) = default;
    Context& operator=(Context&&) = default;

    /// <summary>
    /// Устанавливает значение переменной
    /// </summary>
    void setVariable(const std::string& name, bool value);

    /// <summary>
    /// Возвращает значение переменной (выбрасывает исключение, если не найдена)
    /// </summary>
    bool getVariable(const std::string& name) const;

private:
    std::unordered_map<std::string, bool> variables;
};
