//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero

#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout << "Enter the 1st Number :";
	cin >> a;
	cout << "Enter the 2nd number :";
	cin >> b;
	
	try
	{
		if (b==0)
		{
			throw a;
		}
		else 
		{
			cout << "Division : "<< a/b<< endl;
		}
	}
	catch(...)
	{
		cout << "A number cannot be divided by zero.";
	}


		
	
}

