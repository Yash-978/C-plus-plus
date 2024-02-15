#include<iostream>
using namespace std ;
class A 
{
	int km,m;
	public :
		void set()
		{
		 	cout << "Enter  the KM  :";
			cin >>km;
			cout << "Enter  the Meter   :";
			cin >>m;
			
		}
		void get ()
		{
			
			cout << km<<" "<<endl;
			
			cout << m<<" "<<endl;
				
		}
		A operator+(A &a2)
		{
			A ob;
			int x=this->m+a2.m;
			int total=x/1000;
			int Total=x%1000;
			int y=this->km+a2.km+total;
			ob.km=y;
			ob.m=Total;
			return ob;
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
