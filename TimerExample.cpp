#include "Timer.h"
#include <iostream>

int main() {
	Timer timer; // timer starts
	std::cout << "For loop took: ";
	for (int i = 0; i < 1000000; i++) {

	}
} // timer ends here
// you can time specific parts of a function by using {}. Be aware that anything that was created in said {} scope will be destroyed when the scope ends. For example
/*
	{
		Timer timer
		string iNeedThisString = "this is needed"
	} // timer ends
	iNeedThisString is undefined


	string iNeedThisString;
	{
		Timer timer
		iNeedThisString = "this is needed";
	} // timer ends
	iNeedThisString has the value "this is needed"
*/