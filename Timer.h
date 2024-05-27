#include <chrono>
#pragma once

class Timer {
	std::chrono::high_resolution_clock::time_point time;
	std::chrono::duration<double, std::milli> duration;

public:
	Timer();
	~Timer();
};