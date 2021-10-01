#include "logger_creator.h"
#include <utility>

void logger_creator::log(std::string message) const
{
	logger* logger = create();
	logger->log(std::move(message));
	delete logger;
}
