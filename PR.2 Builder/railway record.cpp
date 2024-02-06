//Q.1 Write a Program to make a Railway Reservation System.
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- By Searching Train Number
//(C) Minimum 3 Input Train Records

#include<iostream>
using namespace std;
class Railwayrecord
{
	public :
	int time;
	string source,destination,line;
	static int train_number1;
	static int train_number2;
	static int train_number3;
	static string train_name1;
	static string train_name2;
	static string train_name3;
	
	void set()
	{
		
//		cout << "Enter the Train Number :";
//		cin  >> ;
//		getline(cin,line);
//		cout << "Enter The Train Name :";
//		getline(cin,train_name)
		getline(cin,line);
		cout << "Enter The Train Source :";
		getline(cin,source);
		cout  << "Enter the Train Time :";
		cin>>time;
		cin.ignore();
		cout << "Enter The Destination :";
		getline(cin,destination);
		
	}
	void get ()
	{
	//	cout  << "Train Number :"<<train_number1<<endl;
	//	cout << "Train Name :"<<train_name1<<endl;
		cout << "Train Source  :"<<source <<endl;
		cout << "Train Time :"<<time<<endl;
		cout << "Train Destination :"<<destination<<endl;
	}
};
int  Railwayrecord :: train_number1=1234;
int  Railwayrecord :: train_number2=4321;
int  Railwayrecord :: train_number3=6541;
string Railwayrecord :: train_name1 ="Golden Chariot";
string Railwayrecord :: train_name2 ="Maharaja Express";
string Railwayrecord :: train_name3 ="Deccan Odyssey";
int main ()
{
	int n,i;
	Railwayrecord R1;
	cout <<"1 for All detail."<<endl;
	cout <<"2 for single train detail."<<endl;
	cout <<"3 for single train detail."<<endl;
	cout << "Enter the Number between 1 to 3:"<<endl;
	cin >>n;
	for (i=1;i<=3;i++)
	{
		if (n==1)
		{
			cout  << "Train Number :"<<R1.train_number1<<endl;
			cout << "Train Name :"<<R1.train_name1<<endl;
			R1.set();
			R1.get();
			cout << endl<<endl;
			cout  << "Train Number :"<< R1.train_number2 <<endl;
			cout << "Train Name :"<<R1.train_name2<<endl;	
			R1.set();
			R1.get();
			cout << endl<<endl;
			cout  << "Train Number :"<< R1.train_number3 <<endl;
			cout << "Train Name :"<<R1.train_name3<<endl;	
			R1.set();
			R1.get();
			cout << endl<<endl;
		}
		else if (n==2)
		{
			cout  << "Train Number :"<< R1.train_number2 <<endl;
			cout << "Train Name :"<<R1.train_name2<<endl;	
			R1.set();
			R1.get();
		}
		else if (n==3)
		{
			cout  << "Train Number :"<< R1.train_number3 <<endl;
			cout << "Train Name :"<<R1.train_name3<<endl;	 
			R1.set();
			R1.get();
			
		}
	}
}
