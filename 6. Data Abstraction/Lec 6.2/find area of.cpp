//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle  A = pie*r*r
//- the area of a triangle A = ½ (b × h) square units
//- the area of a rectangle A=l*w
//- use one single pure virtual function named calculate() to perform all the above operations

#include<iostream>
using namespace std;
class Shape
{
	protected :
	float r,b,h,l,w,ans;
	public :
		virtual void calculate() = 0;
		
};
class Circle : public Shape
{
	public :
	void calculate()
	{
		cout << "Enter The Radius of circle :";
		cin >> r ;
		ans = 3.141*r*r;
		cout << "Area Of circle : " << ans << endl;
		
	}
};
class Triangle : public Shape
{
	public :
	void calculate()
	{
		cout << "Enter The Base :";
		cin >> b ;
		cout << "Enter The Height :";
		cin >> h ;
		
		ans = 0.5*b*h;
		cout << "Area Of Triangle : " << ans << endl;
		
	}
};
class Rectangle : public Shape
{
	public :
	void calculate()
	{
		cout << "Enter The Length :";
		cin >> l ;
		cout << "Enter The Width :";
		cin >> w ;
		
		ans = l*w;
		cout << "Area Of Rectangle : " << ans << endl;
		
	}
	
};
main()
{

	//Shape *ptr=&s1;
	//ptr -> calculate();
	
	Circle c1;
	c1.calculate();
	//Shape *ptr=&c1;
	//ptr -> calculate();
	
	Triangle t1;
	t1.calculate();
	//Shape *ptr=&t1;
	//ptr -> calculate();
	
	Rectangle r1;
	r1.calculate();
	//Shape *ptr=&r1;
	//ptr -> calculate();	
}


 

