#include <memory>
#include "GoldenSwordCreator.h"
#include "GoldenSword.h"
#include "ISword.h"

std::unique_ptr<ISword> GoldenSwordCreator::factoryMethod()
{
	return std::make_unique<GoldenSword>();
}
