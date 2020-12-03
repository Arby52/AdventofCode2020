#include "pch.h"
#include "LoadInput.h"

class Day1Task1
{
public:

	Day1Task1() {

	}

	std::list<int> inputs = LoadInput::ReadInts("task1input.txt");

	void Task() {
		std::cout << " e";
		for (int i = 0; i < inputs.size(); i++)
		{
			std::cout << i << " d";
		}
	}
};