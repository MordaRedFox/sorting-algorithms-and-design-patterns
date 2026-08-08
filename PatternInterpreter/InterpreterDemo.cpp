#include <iostream>
#include <memory>
#include <clocale>
#include "Context.h"
#include "VariableExpression.h"
#include "AndExpression.h"
#include "OrExpression.h"
#include "NotExpression.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Интерпретатор\""
        << std::endl << std::endl;
    // Создание контекста и задание значений переменных
    Context context;
    context.setVariable("A", true);
    context.setVariable("B", false);
    context.setVariable("C", true);
    std::cout << "Переменные контекста: A = true, B = false, C = true"
        << std::endl;
    // Построение выражения: (A AND B) OR C
    auto exprA{ std::make_shared<VariableExpression>("A") };
    auto exprB{ std::make_shared<VariableExpression>("B") };
    auto exprC{ std::make_shared<VariableExpression>("C") };
    auto andAB{ std::make_shared<AndExpression>(exprA, exprB) };
    auto orABC{ std::make_shared<OrExpression>(andAB, exprC) };
    std::cout << "Выражение: (A AND B) OR C" << std::endl;
    bool result{ orABC->interpret(context) };
    std::cout << "Результат: " << (result ? "true" : "false")
        << std::endl << std::endl;
    // Изменение контекста
    context.setVariable("A", false);
    context.setVariable("B", true);
    context.setVariable("C", false);
    std::cout << "Новые значения контекста: A = false, B = true, C = false"
        << std::endl;
    std::cout << "Выражение: (A AND B) OR C" << std::endl;
    result = orABC->interpret(context);
    std::cout << "Результат: " << (result ? "true" : "false")
        << std::endl << std::endl;
    // Построение выражения: NOT (A AND B)
    auto notAnd{ std::make_shared<NotExpression>(andAB) };
    std::cout << "Выражение: NOT (A AND B)" << std::endl;
    result = notAnd->interpret(context);
    std::cout << "Результат: " << (result ? "true" : "false") << std::endl;
    return 0;
}
