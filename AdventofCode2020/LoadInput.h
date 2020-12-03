#pragma once
class LoadInput
{
public:
	
	static std::list<int> ReadInts(std::string fileName);

private:
	LoadInput();
	~LoadInput();
};

