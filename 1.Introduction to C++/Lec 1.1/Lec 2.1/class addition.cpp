#include<iostream>
using namespace std;

class addition
{
	

	private :
	int sum;
	public :
	int n1,n2;
	public :
	void user ()
	{
		cout << "Enter the First Value :"<<endl;
		cin >> n1;
		cout << "Enter the Second Value :"<<endl;
		cin >> n2;
		
	}
	void sum1 ()
	{
		sum=n1+n2;
		cout << "Addition of Num1 and Num2 is "<<sum <<endl;
	}
	
};
int main()
{
	 addition c1;
	c1.user();
	c1.sum1();
	return 0; 
}
