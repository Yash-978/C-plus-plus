//Q.1 Write a Program to create a Message class with a constructor that takes a single string with a default value.
//Create a private member of the typed string, and in the constructor simply assign the argument string to your internal string.
//Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored
//in the variable and one that takes a string argument, which it prints in addition to the internal message.


#include<iostream>
using namespace std;
class Message 
{
	string msg,newmsg;
	public :
		void message(string msg)
		{
			this ->msg=msg;
		}
		void print()
		{
			cout << msg<< " "<< newmsg;
			
		}
		void print(string newmsg)
		{
			cout << msg<< " "<< newmsg;
			
			
		}
};
main ()
{
	Message m1,m2;
	m1.print("Hello");
	m2.print();
	m2.print("Flutter");
	return 0;
}
