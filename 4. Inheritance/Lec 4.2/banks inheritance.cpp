//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child
//classes
#include<iostream>
using namespace std;
class RBI
{
	protected : 
	int rate;
	void getROI()
	{
		cout << "Enter the Rate of Interest :";
		cin >> rate;
	}
	
};
class SBI : public RBI
{	
	public :
	void get ()
	{
		getROI();
		cout << "Enter SBI Interest :" << rate << endl;
	}
	
};


class BOB : public RBI
{	
	public :
	void get ()
	{
		getROI();
		cout << "Enter BOB Interest :" << rate<< endl;
	}
	
};
class ICICI : public RBI
{	
	public :
	void get ()
	{
		getROI();
		cout << "Enter ICICI Interest :" << rate<< endl;
	}
	
};
main()
{
	//RBI r1;
	SBI s1;
	ICICI i1;
	BOB b1;
 	s1.get();
	i1.get();
	b1.get();
	
}



