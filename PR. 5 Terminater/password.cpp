//Q.1 Write a Program to create a class that illustrates the
// concept of handling all types of exceptions using general exceptions.

#include<iostream>
#include<string.h>
using namespace std;
class A
{
	string name ;
	public :
	void set()
	{
	cout<<"Enter the password : ";
	getline(cin,name);
	int len=name.length();
	int ck=0;
	int i;
	for(i=0;i<len;i++)
	{
		if(name[i]>64 && name[i]<91)
		{
			throw ck=1;
		}
	}	

	}
};
main()
{
	A a1;
	try
	{
		a1.set();
		cout<<"Password created successful ";

	}
	catch(...)
	{
		cout <<"Password invalid.";
	}
}
