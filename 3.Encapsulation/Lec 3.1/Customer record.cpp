#include<iostream>
using namespace std;
class Curecord
{
	int id,age,i,mobile_no;
	string name,sim_card,city,line,telecom_brand;
	public :
	void set()
	{
	
		cout << "Enter the Customer id     :";
		cin >> id;
		getline(cin ,line);
		cout << "Enter the Customer Name   :";
		getline(cin,name);
		cout << "Enter the Customer Age    :";
		cin >> age;
		cout << "Enter the Customer Mobile Number  :";
		cin >> mobile_no;
		cout << "Enter the Customer Sim Card :";
		cin >> sim_card;
		cout << "Enter the Customer Telecom brand Name :";
		cin >> telecom_brand;		
		cout << "Enter the Customer City   :";
		cin >> city;
		cout << endl;
		
	}
	void get ()
	{
	
		cout << "Customer Name               :" << name << endl;
		cout << "Customer ID                 :" << id << endl;
		cout << "Customer Age                :" << age << endl;
		cout << "Customer Mobile Number      :" << mobile_no << endl;
		cout << "Customer Sim Card Name      :" << sim_card << endl;
		cout << "Customer Telecom Brand Name :" << telecom_brand << endl;
		cout << "Customer City         		 :" << city;
		cout << endl;
	}
	
	
};
main()
{
	Curecord C1[5];
	
	int i;
	for (i=0;i<5;i++)
	{
		cout  << "Customer Number : "<< i+1 <<endl;	
		C1[i].set();
		cout  << "Customer Number : "<< i+1 <<endl;
		C1[i].get();
	}
}
