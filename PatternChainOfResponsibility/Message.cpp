#include <utility>
#include <string>
#include "Message.h"

Message::Message(std::string t, std::string b)
	: title(std::move(t)), body(std::move(b)) {}
