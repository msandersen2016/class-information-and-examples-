#pragma once
#include <iostream>
#include <string>
using namespace std;
class motor
{
private:
	int numberOfCylinders;
	int horsepower;
public:
	motor(void)
	{
		numberOfCylinders = 0;
		horsepower = 0;
	}
	motor(int numberOfCylinders, int horsepower)
	{
		this->numberOfCylinders = numberOfCylinders;
		this->horsepower = horsepower;
	}
	void setnumberOfCylinders(int numberOfCylinders)
	{
		if (numberOfCylinders > 0)
			this->numberOfCylinders = numberOfCylinders;
		else
			this->numberOfCylinders = 0;
	}
	int getnumberOfCylinders(void)
	{
		return numberOfCylinders;
	}
	void setHorsepower(int horsepower)
	{
		if (horsepower > 0)
			this->horsepower = horsepower;
		else
			this->horsepower = 0;
	}
	int getHorsepower(void)
	{
		return horsepower;
	}
};