/*matthew andersen
blackjack game*/

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int ageverification(int);
///entry point of the application
int main()
{
	int age=0;
	try
	{
		cout << "enter your age" << endl;
		cin >> age;
		ageverification(age);
		cout << "your age is:" << endl;
	}
	catch(string error)
	{
	
		cout << error<<endl;
	}
	cout << "Press any key to continue";
	_getch();

	return 0;
}
int ageverification(int age)
{
	if (age <= 0)
	{
		string error = "this is not a number";
		throw error;
	}
	return age;
}