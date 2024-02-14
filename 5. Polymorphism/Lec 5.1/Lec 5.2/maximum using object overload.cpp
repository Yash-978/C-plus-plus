//Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.
// ++,-
#include<iostream>
using namespace std;
class Maximum
{
	protected : 
	int a,b;
	public :
		void set()
		{
			cout << "Enter the Value of A :";
			cin >> a;
//			cout << "Enter the Value of B :";
//			cin >> b;
		}
		void get()
		{
			cout << "Value of A :" << a<< endl;
			
		//	cout << "Value of B :"<< b << endl;
			
		}
		Maximum operator>(Maximum &m2)
		{
			Maximum temp; 
			
				if (a<m2.a)
				{
					temp.a=m2.a;
				}
				else 
				{
					temp.a=a;
				}
				return temp;
			
		}
}; 

main ()
{
	Maximum m1,m2,m3;
	m1.set();
	m2.set();
	
	m3=m1>m2;
	m3.get();
}

