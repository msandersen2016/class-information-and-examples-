#pragma once
#include <iostream>
#include <string>
#include "computer.h"
using namespace std;
class SuperComputer: public computer
{
private:
	int numberOfProcessors;
public:
	SuperComputer(void) :computer()
	{
		numberOfProcessors = 0;
	}
	SuperComputer(int numberOfProcessors)
	{
		this->numberOfProcessors = numberOfProcessors;
	}
	void setnumberOfProcessors(int numberOfProcessors)
	{
		if (numberOfProcessors > 0)
			this->numberOfProcessors = numberOfProcessors;
		else
			this->numberOfProcessors = 0;
	}
	int getnumberOfProcessors(void)
	{
		return numberOfProcessors;
	}
	~SuperComputer()
	{}
};