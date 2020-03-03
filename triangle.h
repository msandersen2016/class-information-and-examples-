#pragma once
class Triangle
{
private:
	int baseLength;
	int Height;
public:
	Triangle(void)
	{
		baseLength = 0;
		Height = 0;
	}
	Triangle(int baseLength, int Height)
	{
		this->baseLength = baseLength;
		this->Height = Height;
	}
	void setBaseLength(int baseLength)
	{
		if (baseLength > 0)
			this->baseLength = baseLength;
		else
			this->baseLength = 0;
	}
	int getBaseLength(void)
	{
		return baseLength;
	}
	void setHeight(int Height)
	{
		if (Height > 0)
			this->Height = Height;
		else
			this->Height = 0;
	}
	int getHeight(void)
	{
		return Height;
	}
	double CalculateArea(void)
	{
		double area;
		area = 0.5*double(baseLength*Height);
		return area;
	}
	~Triangle()
	{}
};