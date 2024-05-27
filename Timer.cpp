#include "Timer.h"
#include <iostream>

Timer::Timer() {
	time = std::chrono::high_resolution_clock::now();
}

Timer::~Timer() {
	duration = std::chrono::high_resolution_clock::now() - time;
	std::cout << duration.count() << "ms";
}