#include <memory>
#include "SwordCreator.h"
#include "ISword.h"

void SwordCreator::createAndUseSword()
{
	std::unique_ptr<ISword> sword{ factoryMethod() };
	sword->use();
}
