#include <memory>
#include "Adapter.h"
#include "Adaptee.h"

Adapter::Adapter() : adaptee(std::make_unique<Adaptee>()) {}

void Adapter::doSomeJob1(int repeatCount)
{
    adaptee->doSomeSpecificJob1(repeatCount);
}

void Adapter::doSomeJob2()
{
    adaptee->doSomeSpecificJob2();
}

void Adapter::doSomeJob3()
{
    adaptee->doSomeSpecificJob3();
}
