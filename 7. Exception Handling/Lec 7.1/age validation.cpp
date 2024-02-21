//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a person cannot be able to vote if his/her age is less than 18

#include<iostream>
using namespace std;
main()
{

int age;
	cout << "Enter the Age :";
	cin >> age;
	
	try
	{
		if (age<18)
		{
			throw age;
		}
		else 
		{
			cout << "You Can vote "<< endl;
		}
	}
	catch(...)
	{
		cout << "You Can't vote "<< endl;
	}
}
