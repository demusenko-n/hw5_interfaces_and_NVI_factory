#pragma once
#include <string>

class logger
{
	virtual void log_virtual(std::string message) = 0;
public:
	virtual ~logger() = default;
	void log(std::string message);
};
