#include <memory>
#include "MacFactoryOS.h"
#include "MacButton.h"
#include "MacTextField.h"
#include "AbstractButton.h"
#include "AbstractTextField.h"

std::unique_ptr<AbstractButton> MacFactoryOS::createButton()
{
	return std::make_unique<MacButton>();
}

std::unique_ptr<AbstractTextField> MacFactoryOS::createTextField()
{
	return std::make_unique<MacTextField>();
}
