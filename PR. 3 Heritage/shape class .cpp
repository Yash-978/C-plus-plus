#include<iostream>
using namespace std;
class Number 
{ 
	protected :
	

	void set()
	{
		int n;
		cout << "Enter the number :";
		cin >> n;
	}

	
}; 
class Square : public Number 
{
	public :
	void squ()
	{
		int sq ;
		sq = sq*sq;
		cout << "The Square of Number : " << sq << endl;
	}
};

class Cube : public Number 
{
	public :
	void cube()
	{
		int cu ;
		cu = cu*cu*cu;
		cout << "The Cube of Number : " << cu << endl;
	}
};
main ()
{
	Number n1;
 	Square s1;
	Cube c1;
	n1
}

