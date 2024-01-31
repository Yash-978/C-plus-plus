#include<iostream>
using namespace std;
class Strecord 
{
	int id,age,i;
	string name,email,course,city,line,college;
	public :
	void set()
	{
	
		cout << "Enter the Student id     :";
		cin >> id;
		getline(cin ,line);
		cout << "Enter the Student Name   :";
		getline(cin,name);
		cout << "Enter the Student Age    :";
		cin >> age;
		cout << "Enter the Student Email  :";
		cin >> email;
		cout << "Enter the Student Course :";
		cin >> course;		
		cout << "Enter the College School :";
		cin >> college;
		cout << "Enter the Student City   :";
		cin >> city;
		cout << endl;
		
	}
	void get ()
	{
	
		cout << "Student Name    :" << name << endl;
		cout << "Student ID      :" << id << endl;
		cout << "Student Age     :" << age << endl;
		cout << "Student Email   :" << email << endl;
		cout << "Student Course  :" << course << endl;
		cout << "Student College :" << college << endl;
		cout << "Student City    :" << city << endl;
		cout << endl;
	}
	
	
};
main()
{
	Strecord S1[5];
	
	int i;
	for (i=0;i<5;i++)
	{
		cout  << "Student Number : "<< i+1 <<endl;	
		S1[i].set();
		cout  << "Student Number : "<< i+1 <<endl;
		S1[i].get();
	}
}
