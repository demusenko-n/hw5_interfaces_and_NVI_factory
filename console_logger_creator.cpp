#include "console_logger_creator.h"

#include "console_logger.h"

logger* console_logger_creator::create() const
{
	return new console_logger();
}
