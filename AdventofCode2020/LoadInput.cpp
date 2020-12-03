#include "pch.h"
#include "LoadInput.h"


LoadInput::LoadInput()
{
}


LoadInput::~LoadInput()
{
}

 std::list<int> LoadInput::ReadInts(std::string fileName)
{

	std::list<int> toReturn;
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
