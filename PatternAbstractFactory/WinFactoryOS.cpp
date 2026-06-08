#include <memory>
#include "WinFactoryOS.h"
#include "WinButton.h"
#include "WinTextField.h"
#include "AbstractButton.h"
#include "AbstractTextField.h"

std::unique_ptr<AbstractButton> WinFactoryOS::createButton()
{
	return std::make_unique<WinButton>();
}

std::unique_ptr<AbstractTextField> WinFactoryOS::createTextField()
{
	return std::make_unique<WinTextField>();
}
