//6. Define a class `Calculator` with a method that performs division. 
//Implement exception handling to handle the case of division by zero.
// Create an object of the `Calculator` class and demonstrate 
// exception handling for division by zero.
#include<iostream>
using namespace std;
class Calculator
{
	protected :
	int a,b;
	
	public :
	void set()
	{
		cout<<"Enter the value of A :";
		cin >> a;
		cout<<"Enter the value of B :";
		cin >> b;
		try 
		{
			if (b<0||b==0)
			{
				throw b;
			}
			else 
			{
				cout <<"Division : "<<a/b<<endl;
			}
			
		}
		catch(...)
		{
			cout<<"Enter the Valid Number.";
		}
	}
	
	
};
main()
{
	Calculator c1;
	c1.set();
	
}


