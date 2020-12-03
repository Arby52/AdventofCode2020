#include "pch.h"
#include "LoadInput.h"


LoadInput::LoadInput()
{
}


LoadInput::~LoadInput()
{
}

 std::vector<int> LoadInput::ReadInts(std::string fileName)
{

	std::vector<int> toReturn;
	std::ifstream input;
	input.open(fileName);
	if (input.fail()) {
		std::cout << "failed to open input" << std::endl;
		return toReturn;
	}

	if (input.is_open()) {
		while (!input.eof()) {
			int line;			
			input >> line;
			toReturn.push_back(line);
		}
	}
	return toReturn;
}
