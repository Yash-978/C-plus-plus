//Q.2 Write a Program to throw 0 if the age of the user is less than 18, otherwise print that you are eligible to vote.
//Also, handle that thrown exception and print you are not eligible to vote.
#include<iostream>
using namespace std;
class A
{
	int age;
	public :
	void set()
{
	cout << "Enter the age :";
	cin>>age;
	try
	{

		if(age>=18)
		{

			cout<<" "<<"You can vote .";
		}
		else
		{
			throw age;
		}
	}
		catch(...)
		{
			cout<<" "<<"You can't vote .";
		}


}

};
main()
{
	A a1;
	a1.set();

}
