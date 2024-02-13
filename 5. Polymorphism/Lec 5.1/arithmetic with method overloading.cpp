//Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition
#include<iostream>
using namespace std;
class A
{
	protected :
		int a,b,c,d,e;
	
};
class B : public A
{
//	protected :
//		int a,b,c,d,e;
		public :
		void arithmetic(int a,int b)
		{
			this -> a = a;
			this -> b = b;
			cout << "The Division of A & B : " << a/b<<endl;
		}
		void arithmetic(int a,int b,int c)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
			
			cout << "The Subtraction of A & B & C : " << a-b-c<<endl;
		}
		void arithmetic(int a,int b,int c,int d)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
			this -> d = d; 
			cout << "The Multiplication of A & B & C & D: " <<a*b*c*d<<endl;
		}
		void arithmetic(int a,int b,int c,int d,int e)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
			this -> d = d;
			this -> e = e;
			
			cout << "The Sum of A & B & C & D & E : " << a+b+c+d+e <<endl;
		}
		
		
 
};
main ()
{
	B b1;
	b1.arithmetic(100,20);
	b1.arithmetic(300,20,26);
	b1.arithmetic(315,165,514,546);
	b1.arithmetic(231,215,654,987,784);
	
}

