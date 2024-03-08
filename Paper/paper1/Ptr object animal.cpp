//7. Define an abstract class `Animal` with virtual functions `sound()` and `move()`.
// Implement concrete/normal classes `Dog` and `Bird` that inherit from `Animal`.
//  Demonstrate polymorphism by creating an array of `Animal` pointers pointing to 
//  objects of both `Dog` and `Bird`. Call the `sound()` and `move()` functions for each object.
#include<iostream>
using namespace std;
class Animal
{
	
//	protected :
		public :
			
		virtual void Sound()=0;
		virtual void Move()=0;
		
	
};
class Dog : public Animal
{
	public :
	void Sound()
	{
		cout<<"Bhau Bhau"<<endl;
	}
	void Move()
	{
		cout<<"Running."<<endl;
	}
	
};
class Bird : public Animal
{
	public :
	void Sound()
	{
		cout<<"Meow Meow"<<endl;
	}
	void Move()
	{
		cout<<"Running."<<endl;
	}
};

main()
{
	Animal *a1[3];
	Dog d1;
	Bird b1;
	
	a1[0]=&d1;
	a1[1]=&b1;
	
	a1[0]->Sound();
	a1[0]->Move();
	a1[1]->Sound();
	a1[1]->Move();
	
}


