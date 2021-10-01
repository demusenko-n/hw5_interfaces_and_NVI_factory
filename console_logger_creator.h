#pragma once
#include "logger_creator.h"

class console_logger_creator : public logger_creator
{
public:
	logger* create()const override;
};
