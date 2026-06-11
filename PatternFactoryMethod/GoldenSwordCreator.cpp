#include <memory>
#include "GoldenSwordCreator.h"
#include "GoldenSword.h"
#include "AbstractSword.h"

std::unique_ptr<AbstractSword> GoldenSwordCreator::factoryMethod()
{
	return std::make_unique<GoldenSword>();
}
