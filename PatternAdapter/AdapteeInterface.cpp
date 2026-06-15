#include "AdapteeInterface.h"
#include <iostream>

void AdapteeInterface::doSomeSpecificJob1(int times)
{
    for (size_t i{ 0 }; i < static_cast<size_t>(times); i++)
        std::cout << "Адаптируемый интерфейс делает специфичную работу 1 "
            << "(повтор " << i + 1 << ")" << std::endl;
}

void AdapteeInterface::doSomeSpecificJob2()
{
    std::cout << "Адаптируемый интерфейс делает специфичную работу 2"
        << std::endl;
}

void AdapteeInterface::doSomeSpecificJob3()
{
    std::cout << "Адаптируемый интерфейс делает специфичную работу 3"
        << std::endl;
}
