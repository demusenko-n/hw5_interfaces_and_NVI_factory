#pragma once
#include "logger.h"
class logger_creator
{
public:
	virtual ~logger_creator() = default;
	virtual logger* create()const = 0;

	void log(std::string message)const;
};

