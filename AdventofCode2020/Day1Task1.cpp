#include "pch.h"
#include "LoadInput.h"

class Day1Task1
{
public:

	Day1Task1() {

	}

	std::vector<int> inputs = LoadInput::ReadInts("Inputs/task1input.txt");

	void Task() {
		int result;
		int num1;
		int num2;
		for (int i = 0; i < inputs.size(); i++)
		{
			for (int j = 0; j < inputs.size(); j++) {
				if (inputs[i] + inputs[j] == 2020) {
					num1 = inputs[i];
					num2 = inputs[j];
					result = num1 * num2;
				}
			}
		}
		std::cout << "The answer is: " << num1 << " * " << num2 << " = " << result << "!" << std::endl;
	}
};