#include <memory>
#include "WinFactoryOS.h"
#include "WinButton.h"
#include "WinTextField.h"
#include "IButton.h"
#include "ITextField.h"

std::unique_ptr<IButton> WinFactoryOS::createButton()
{
	return std::make_unique<WinButton>();
}

std::unique_ptr<ITextField> WinFactoryOS::createTextField()
{
	return std::make_unique<WinTextField>();
}
