//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year
#include<iostream>
using namespace std;
class car_record
{
	public:
	int car_id,car_release_year,i,n,j;
	string car_model,car_color, car_company_name,line;
	
	void user()
	{
		cout << "Enter Car Id :"<<endl;
		cin >> car_id;
		getline(cin,line);
		cout << "Enter Car Comapany Name :"<<endl;
		getline (cin,car_company_name) ;
	

		cout << "Enter Car Color :"<<endl;
		cin >>car_color;
	
		
		cout << "Enter Car Model :"<<endl;
		cin >> car_model;
		

		cout << "Enter Car Release Year :"<<endl;
		cin >> car_release_year;

		cout << "\n";
	}
	void output()
	{
		cout << "Car Id = " << car_id << endl;
		cout << "Car Company Name = " << car_company_name << endl;
		cout << "Car Color = " << car_color << endl;
		cout << "Car Model = " << car_model << endl;
		cout << "Car release Year = " << car_release_year << endl;
	}
};

main()
{
	int i;
	car_record Cr[4];
	for (i=0;i<4;i++)
	{
		cout << "Car Number : " << i+1 <<endl;
		Cr[i].user();
		cout <<"\n";
		cout << "Car Number : " << i+1 <<endl;
		Cr[i].output();
		cout <<"\n";
		
	}

	return 0;
}

