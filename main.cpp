
#include "console_logger.h"

int main()
{
	logger* logger = new console_logger();
	logger->log("some message");
	return 0;
}
