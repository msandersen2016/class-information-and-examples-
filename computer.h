#pragma once
#include <iostream>
#include <string>
using namespace std;
class computer
{
	string brand;
	float speed;
public:
	computer(void)
	{
		brand = "unknown";
		speed = 0.0f;
	}
	computer(string brand, float speed)
	{
		this->brand = brand;
		this->speed = speed;
	}
	void setBrand(string brand)
	{
		if (brand.length > 0)
			this->brand = brand;
		else
			this->brand = "unknown";

	}
	void setSpeed(float speed)
	{
		if (speed > 0.0f)
			this->speed = speed;
		else
			this->speed = 0.0f;
	}
	string getBrand(void)
	{
		return brand;
	}
	float getSpeed(void)
	{
		return speed;
	}
	~computer()
	{}
};