#include <memory>
#include "SwordCreator.h"
#include "AbstractSword.h"

void SwordCreator::createAndUseSword()
{
	std::unique_ptr<AbstractSword> sword{ factoryMethod() };
	sword->use();
}
