/*3. Define a base class `Shape` with private attributes `color` and `area`.
 Implement public member functions for setting and getting the color and 
 calculating the area. Derive two classes, `Circle` and `Rectangle`, 
 from the `Shape` class. Implement methods to calculate the area specific to each shape..
 Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.
*/

/*jab bhi abstraction word ka use ho tab pure virtual function ka use hoga jisme hame virtual void ka use karna padhega.
or sare method ke naam bhi same honge jaise isme area sabme same he.or "virtual void area()=0;"iss tarah main/base class me equal to zero 
karna padhega
*/
#include<iostream>
using namespace std;
class Shape
{
	protected :
	string color,line;
	
	public:
		virtual void area()=0;
		void set()
		{
			
			cout<<"Enter the Color : ";
			getline(cin,color);
			//cin.ignore();
			
		}
		
		
		
};
class Circle : public Shape
{
	
	public :
		int r;
		void set1()
		{
			cout<<"Enter Radius :";
			cin>>r;
			
		}
		
	void area()
		{
			set();
			set1();
			cout<<"Area :"<<2*3.143*r<<endl;
		}
		
};
class Rectangle : public Shape
{

		int length,width;
		public :
		void set2()
		{
			getline(cin,line);
			cout<< "Enter the length :"<<endl;
			cin>>length;
			
			cout<< "Enter the width :"<<endl;
			cin>>width;
			
		}
		void area()
		{
			set();
			set2();
			cout<<"Area :"<<length*width<<endl;
		}
	
};

main()
{
	
	Circle c1;
	Rectangle r1;
	
	
	c1.area();
	r1.area();
	
}

