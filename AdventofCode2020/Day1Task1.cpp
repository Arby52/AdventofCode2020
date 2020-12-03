#include "pch.h"
#include "LoadInput.h"

class Day1Task1
{
public:

	Day1Task1() {

	}

	std::list<int> inputs = LoadInput::ReadInts("Inputs/task1input.txt");

	void Task() {
		for (int i = 0; i < inputs.size(); i++)
		{
			std::cout << inputs.back() << std::endl;
			inputs.pop_back();
		}
	}
};