#include <memory>
#include "IronSwordCreator.h"
#include "IronSword.h"
#include "AbstractSword.h"

std::unique_ptr<AbstractSword> IronSwordCreator::factoryMethod()
{
	return std::make_unique<IronSword>();
}
