//4. Extend the `Shape` hierarchy from Question 3 to include a virtual function `display()`.
// Implement the `display()` function in each derived class to print information 
// pecific to the shape. Create an array of `Shape` pointers, pointing to objects of
//  different shapes. Demonstrate polymorphism by calling the `display()` function for each object.
//
#include<iostream>
using namespace std;
class Shape
{
	public : 
	virtual void display()
	{
		cout<<"Hello";
	}
	
};
class Circle : public Shape
{
	public :
	virtual void display()
	{
		cout<<"Circle is round."<<endl;
	}
	
	
};
class Rectangle : public Shape
{
	public :
	virtual void display()
	{
		cout<<"Rectangle is square.";
	}
	
	
};
main()
{
	
	Shape *s1[3];
	Circle c1;
	Rectangle r1;
	
	s1[0]=&c1;//class circle ki info sari s1[0] me address par chali gyi 
	s1[1]=&r1;//class rectangle ki info sari s1[1] me address par chali gyi 
	
	s1[0]->display(); //ab yaha s1[0] se circle mese display call karega by using (->)symbol.
	s1[1]->display(); //ab yaha s1[1] se rectangle mese display call karega	 by using (->)symbol.
	
}
