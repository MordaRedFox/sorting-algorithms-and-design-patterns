#include <iostream>
#include <memory>
#include <windows.h>
#include <clocale>
#include "IFactoryOS.h"
#include "MacFactoryOS.h"
#include "WinFactoryOS.h"

/// <summary>
/// Использует абстрактную фабрику для создания и обработки кнопки и
/// текстового поля. Конкретный тип фабрики (Mac или Windows) передается во
/// время выполнения
/// </summary>
static void createAndUseUI(IFactoryOS& factory)
{
    auto button{ factory.createButton() };
    auto textField{ factory.createTextField() };
    std::cout << "Действие кнопки: " << std::endl;
    button->click();
    std::cout << "Действие текстового поля: " << std::endl;
    textField->inputText();
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Абстрактная фабрика\"" << std::endl;
    MacFactoryOS macFactory;
    std::cout << std::endl << "--- Фабрика Mac OS ---" << std::endl;
    createAndUseUI(macFactory);
    WinFactoryOS winFactory;
    std::cout << std::endl << "--- Фабрика Windows ---" << std::endl;
    createAndUseUI(winFactory);
    return 0;
}
