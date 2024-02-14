//Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance.
// (as same the attached image)


#include<iostream>
using namespace std;
class A
{
	protected :
	int id;
	string name,role,line;

public :
void set1()
{
	cout << "Enter the Employ Name : ";
	getline(cin,name);
	cout << "Enter the Employ Id : ";
	cin >> id;
	cin.ignore();
	cout << "Enter the Employ Role : ";
	getline(cin,role);

}


};
class B : public A
{
protected :
int salary,exp;

public :
void set2()
{
	set1();
	cout << "Enter the Employ salary : ";
	cin >> salary;
	cin.ignore();
	cout << "Enter the Employ Experiance : ";
	cin >> exp;
	cin.ignore();

}

};
class C : public B
{
protected :

string comp_name,address,line;
public :

void set3()
{
	set2();
	cout << "Enter the Employ Company name  : ";
	getline(cin,comp_name);
	cout << "Enter the Employ Address  : ";
	getline(cin,address);

}
void get1()
{
	cout <<endl<<endl<<"Employ Name : "<<name<<endl;
	cout << "Employ Role : "<<role<<endl;
	cout << "Employ Salary : "<<salary<<endl;

}
};
class D : public C
{
	protected :
	long long contact;
	string email,line;
	public:
	void set4()
	{
	set3();
	cout << "Enter the Employ Email : ";
	getline(cin,email);
	cout << "Enter the Employ Contact : ";
	cin >> contact;
	cin.ignore();
}
void get2()
{
	get1();
	
	cout << "Employ Id : " << id << endl;
	
	
	cout << "Employ Company name  : "<< comp_name<<endl;
	cout << "Employ Address  : "<<address<<endl;
	
	cout << "Employ Email : "<< email<<endl;
	
	cout << "Employ salary : "<<salary<<endl;
	
	cout << "Employ Experiance : "<<exp<<endl;

	cout << "Employ Contact : "<<contact ;

}
};
main ()
{
	D d1;
	d1.set4();
	d1.get2();
}