//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;
main()
{

	int l,check=0,i;
	char pass[32];
	cout << "Enter the Password :";
	cin >> pass;
	l=strlen(pass);
	for(i=0; i<l; i++)
	{
		if(pass[i]>=65 && pass[i]<=90)
		{
			check= 1;
		}
	}
	try
	{
		if (check==0)
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
