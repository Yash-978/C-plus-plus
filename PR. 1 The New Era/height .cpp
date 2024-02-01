//Q.1 Write a Program to create a class to read and add two distances.
//For example,
//Input:
//input1 => feet: 8, inch: 16
//input2 => feet: 4, inch: 14

//Output:
//14 feet 6 inch
#include<iostream>
using namespace std;
class Height
{
	public :
	int feet,inch;
	void Feet ()
	{
		int feet,inch, f1,i1;
		cout << "Enter the feet :";
		cin>>feet;
		cout << "Enter the inches :";
		cin>>inch;
		cout << "Enter the feet :";
		cin>>f1;
		cout << "Enter the inches :";
		cin>>i1;
		feet = feet + f1 + inch/12 + i1/12;
		inch= inch%12 + i1%12;
		cout << feet <<"  feet"<<inch<<"  inch";
	}
	
};
main()
{
	Height h1;
	
	h1.Feet();
	return 0;
}
