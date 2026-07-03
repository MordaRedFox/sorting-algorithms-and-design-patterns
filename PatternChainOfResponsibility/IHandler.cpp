#include <memory>
#include <utility>
#include "IHandler.h"

void IHandler::setNext(std::shared_ptr<IHandler> next)
{
    nextHandler = std::move(next);
}
