#include "pch.h"
#include "LoadInput.h"

//https://adventofcode.com/2020/day/1
class Day1Task1
{
public:

	Day1Task1() {

	}

	std::vector<int> inputs = LoadInput::ReadInts("Inputs/task1input.txt");

	void Task1() {
		int result;
		int num1;
		int num2;
		for (int i = 0; i < inputs.size(); i++)
		{
			for (int j = 0; j < inputs.size(); j++) 
			{
				if (inputs[i] + inputs[j] == 2020) {
					num1 = inputs[i];
					num2 = inputs[j];
					result = num1 * num2;
				}
			}
		}
		std::cout << "The answer to task 1 is: " << num1 << " * " << num2 << " = " << result << "!" << std::endl;
	}

	void Task2() {
		int result;
		int num1;
		int num2;
		int num3;
		
		for (int i = 0; i < inputs.size(); i++)
		{
			for (int j = 0; j < inputs.size(); j++) 
			{
				for (int k = 0; k < inputs.size(); k++)
				{					
					if (inputs[i] + inputs[j] + inputs[k] == 2020) {
						num1 = inputs[i];
						num2 = inputs[j];
						num3 = inputs[k];
						result = num1 * num2 * num3;
					}

				}
			}
		}

		std::cout << "The answer to task 2 is: " << num1 << " * " << num2 << " * " << num3 << " = " << result << "!" << std::endl;
	}
};