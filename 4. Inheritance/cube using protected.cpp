//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods
#include<iostream>
using namespace std;
class X
{
	protected :
	int a,b,c;
		
};
class Y : public X
{
	public :
	void setdata()
	{
		cout << "Enter the value in a :";
		cin >>a;
		cout << "Enter the value in b :";
		cin >>b;
		cout << "Enter the value in c :";
		cin >>c;
	}
	
	void getdata ()
	{
		int cube = (a*a*a) + (b*b*b) + (c*c*c);
		cout  << "the sum of cube is = " << cube << endl;
	}	


};
int main ()
{
	Y y1;
	y1.setdata();
	y1.getdata();

}