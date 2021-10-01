#pragma once
#include "logger.h"

class console_logger : public logger
{
public:
	void log_virtual(std::string message) override;
};
