//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name
#include<iostream>
using namespace std;
class employ_record
{
	public:
	int emp_id,emp_salary,emp_exp,emp_age,i,n;
	string emp_name,emp_role,emp_city, emp_company_name;
	
	void user()
{
	//	for (i=0;i<2;i++)
	//{
		cout << "Enter Employ Name :"<<endl;
		getline(cin,emp_name);
	   	

		cout << "Enter Employ Id :"<<endl;
		cin >> emp_id;
		//getline(cin,line);

		cout << "Enter Employ age :"<<endl;
		cin >> emp_age;
		//getline(cin,emp_age);

		cout << "Enter Employ role :"<<endl;
		cin.ignore();
		getline(cin,emp_role);

		cout << "Enter Employ preferred City :"<<endl;
		cin.ignore();
		getline(cin,emp_city);
		

		cout << "Enter Employ Experianced :"<<endl;
		cin >> emp_exp;
	//	getline(cin,emp_exp);
		
		cout << "Enter Employ Company Name :"<<endl;
		cin.ignore();
		getline(cin,emp_company_name);
		

		cout << "Enter Employ Salary :"<<endl;
		cin >> emp_salary;
		//getline(cin,emp_salary);
		//cout >>endl>>endl;
		cout << "\n";
//	}
}
	void output()
	{
//		for (i=0;i<2;i++)
//		{
			cout << "Employ name = " << emp_name << endl;
			cout << "Employ Id = " << emp_id << endl;
			cout << "Employ Age = " << emp_age << endl;
			cout << "Employ Role = " << emp_role << endl;
			cout << "Employ City = " << emp_city << endl;
			cout << "Employ Experianced = " << emp_exp << endl;
			cout << "Employ Company Name = " << emp_company_name << endl;
			cout << "Employ Salary = " << emp_salary << endl;	
	//	}
	}
};

main()
{
	int i;
	employ_record Er[5];
	for (i=0;i<5;i++)
	{
		Er[i].user();
		cout <<"\n";
	}
	for (i=0;i<5;i++)
	{
		Er[i].output();
		cout <<"\n";
	}
	return 0;


}
