//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
using namespace std;
main()
{

	int pass;
	cout << "Enter the Password :";
	cin >> pass;
	l=strlen(pass);
	try
	{
		if (l>=48 ||l<=48 && l>=65 || l<=90)
		{
			throw l;
		}
		else 
		{
			cout << "Your Password Has been Verified."<< endl;
		}
	}
	catch(...)
	{
		cout << "please enter valid password which contain alphanumeric variable"<< endl;
	}
}

