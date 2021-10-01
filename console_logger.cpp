#include "console_logger.h"

#include <iostream>

void console_logger::log_virtual(std::string message)
{
	std::cout << message;
}
