#include <memory>
#include "IronSwordCreator.h"
#include "IronSword.h"
#include "ISword.h"

std::unique_ptr<ISword> IronSwordCreator::factoryMethod()
{
	return std::make_unique<IronSword>();
}
