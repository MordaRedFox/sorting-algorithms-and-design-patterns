#include <iostream>
#include <memory>
#include <windows.h>
#include <clocale>
#include "Adapter.h"
#include "ITarget.h"

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Адаптер\"" << std::endl << std::endl;
    // Работа с нужным классом через адаптер для сохранения целевого интерфейса
    std::unique_ptr<ITarget> adapter{ std::make_unique<Adapter>() };
    std::cout << "Вызов doSomeJob1(3):" << std::endl;
    adapter->doSomeJob1(3);
    std::cout << std::endl << "Вызов doSomeJob2:" << std::endl;
    adapter->doSomeJob2();
    std::cout << std::endl << "Вызов doSomeJob3:" << std::endl;
    adapter->doSomeJob3();
    return 0;
}
