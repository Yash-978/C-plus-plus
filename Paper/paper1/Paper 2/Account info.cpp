//2. Define a class named `BankAccount` with private attributes `accountNumber`,
// `balance`, and `ownerName`. Encapsulate these attributes using appropriate
//  access specifiers. Implement public member functions to credit, debit, 
//  and display the balance. Demonstrate encapsulation by interacting with the class through its member functions.
#include<iostream>
using namespace std;
class Bankaccount
{
	long long accountno,balance;
	string name;
	int addmoney,addbalance,debmoney,debbalance;
	public : 
	
		void set()
		{
			cout<<"Enter the Account Ownwer Name : ";
			getline(cin,name);
			cout<<"Enter the Account Number  : ";
			cin>>accountno;
			cin.ignore();
			cout<<"Enter the Account Balance : ";
			cin>>balance;
			cin.ignore();
			
			
			
		}
		void credit()
		{
			cout<<"Enter the The Amount You Wanna Add :";
			cin>>addmoney;
			cin.ignore();
			addbalance=balance+addmoney;
			
		}
		void debit()
		{
			cout<<"Enter the The Amount You Wanna Remove :";
			cin>>debmoney;
			cin.ignore();
			debbalance=balance-debmoney;
			
		}
		
		void display()
		{
			cout<<"Your Account Information :"<<endl;
			cout<<"Account Ownwer Name : "<<name<<endl;
			cout<<"Account Number : "<<accountno<<endl;
			cout<<"Account Balance : "<<balance<<endl;
			cout<<"Credit Balance : "<<addbalance<<endl;
			cout<<"Debit Balance : "<<debbalance<<endl;
			 
		} 
	
};
main()
{
	Bankaccount b1;
	b1.set();
	b1.credit();
	b1.debit();
	b1.display();
	
}


