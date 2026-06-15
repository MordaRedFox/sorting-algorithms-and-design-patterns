#include <memory>
#include "Adapter.h"
#include "AdapteeInterface.h"

Adapter::Adapter() : adaptee(std::make_unique<AdapteeInterface>()) {}

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
