#pragma once
#include <iostream>
#include <string>
#include "motor.h"
using namespace std;
class car
{
private:
	string make;
	string model;
	motor engine;
public:
	car(void)
	{
		make = "unknown";
		model = "unknown";
	}
	car(string make, string model)
	{
		this->make = make;
		this->model = model;
	}
	void setMake(string make)
	{
		if (make.length > 0)
			this->make = make;
		else
			this->make = "unknown";

	}
	string getMake(void)
	{
		return make;
	}
	void setModel(string model)
	{
		if (model.length > 0)
			this->model = model;
		else
			this->model = "unknown";
	}
};