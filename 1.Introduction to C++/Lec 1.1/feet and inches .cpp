#include<iostream>
using namespace std;
main()
{
	int feet ,inches,i;
	cout << "Enter the Feet :" <<endl;
	cin >> feet;
	cout << "Enter the Inches :" <<endl;
	cin >> inches;
	i=inches/12;
	feet=i+feet;
	inches=inches -(i*12);
	cout << endl << "Total feet and Inches are = " << feet << " feet  "  << inches << " inches";
	
}
