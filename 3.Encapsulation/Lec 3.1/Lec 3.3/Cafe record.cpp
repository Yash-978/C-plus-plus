#include<iostream>
using namespace std ;
class Caferecord 
{
	int staff_quantity,id,established_year,rating;
	string type,location,line;
	static string cafename;
	
	public:
	void set()
	{
		cout << "Enter the Cafe Id :" ;
		cin >> id ;
		getline(cin,line);
		cout << "Enter the Cafe Type :";
		getline(cin,type);
		cout << "Enter the Cafe Staff Location :";
		cin >> location ;
		cout << "Enter the Cafe Staff Quantity :";
		cin >> staff_quantity ;
		cout << "Enter the Cafe Established Year :" ;
		cin >> established_year ;
		cout << "Enter the Cafe Rating :";
		cin >> rating ;

	}
	void get()
	{
		
		cout << "Cafe Name 		 :"<<cafename<<endl;
		cout << "Cafe Id        	         :"<<id<<endl;
		cout << "Cafe Type		 :"<<type<<endl;
		cout << "Cafe Location		 :"<<location<<endl;
		cout << "Cafe Staff Quantity	 :"<<staff_quantity<<endl;
		cout << "Cafe Established Year    :"<<established_year<<endl;
		cout << "Cafe Rating              :"<<rating<<endl;
	}
};

string Caferecord :: cafename="StarBucks";
int main()
{
	
	int i,n;
	cout << "Enter the Number of Cafe :"<<n<<endl;
	cin>>n;
	Caferecord C1[n];
	for (i=0;i<n;i++)
	{
		cout << "Cafe Number :"<<i+1<<endl;
		C1[i].set();
		cout<< endl;
	}
	for (i=0;i<n;i++)
	{
		cout << "Cafe Number :"<<i+1<<endl;
		C1[i].get();
		cout<< endl;
	}

	
	
}


