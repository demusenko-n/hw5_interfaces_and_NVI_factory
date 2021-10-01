#define _CRT_SECURE_NO_WARNINGS
#include "logger.h"

#include <chrono>

void logger::log(std::string message)
{
	using namespace std::chrono;
	const std::time_t time_now = system_clock::to_time_t(system_clock::now());
	log_virtual("TIME: " + std::string(std::ctime(&time_now)) + "[" + std::move(message) + "]\n");
}
