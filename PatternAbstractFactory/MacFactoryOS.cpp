#include <memory>
#include "MacFactoryOS.h"
#include "MacButton.h"
#include "MacTextField.h"
#include "IButton.h"
#include "ITextField.h"

std::unique_ptr<IButton> MacFactoryOS::createButton()
{
	return std::make_unique<MacButton>();
}

std::unique_ptr<ITextField> MacFactoryOS::createTextField()
{
	return std::make_unique<MacTextField>();
}
