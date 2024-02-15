#include<iostream>
using namespace std;
class A 
{
	protected :
		int a,b;
		public :
			void set()
			{
				cout << "Enter the value of A : ";
				cin >> a;
				cout << "Enter the value of B : ";
				cin >> b;
				
			}
			void get ()
			{
				cout<< "A = :"<<a<<endl;
				cout<< "B = :"<<b<<endl;
			}
			A operator+ (A &a2)
			{  
				int x,y;
			 	A temp;
				x = this -> a + a2.a;
				y = this -> b + a2.b;
				
				temp.a=x ;
				temp.b=y ;
				return temp;
				
			}
};

main ()
{
	A a1,a2,a3;
	a1.set();
	a2.set();
	a3=a1+a2;
	a3.get();
}
