#include<iostream>
using namespace std ;
class Diamond 
{
	int staff_quantity,revenue,id,raw_diamond,exp_diamond;
	//string ceoname,com_name;
	static  string ceoname;
	static string comp_name;
	public:
	void set()
	{
		cout << "Enter the  Id :" ;
		cin >> id ;
		cout << "Enter the Staff Quantity :";
		cin >> staff_quantity ;
		cout << "Enter the Revenue (Revenue/Year) :" ;
		cin >> revenue ;
		cout << "Enter the Import Raw Diamonds (Diamond/Year) :";
		cin >> raw_diamond ;
		cout << "Enter the Export Diamond (Diamond/year) :";
		cin >> exp_diamond ;
//		cout << "Enter the  :"<< ;
//		cin >>  ;
	}
	void get()
	{
		
		cout << "Name of the company 		 	   	 :"<<comp_name<<endl;
		cout << "Ceo Name of the company     		  	 :"<<ceoname<<endl;
		cout << "Id of the company				 :"<<id<<endl;
		cout << "Staff Quantity of the company 			 :"<<staff_quantity<<endl;
		cout << "Revenue of the Company 				 :"<<revenue<<endl;
		cout << "Import Diamond of the Company (per Year)         :"<<raw_diamond<<endl;
		cout << "Export Diamond of the Company (per Year)         :"<<exp_diamond<<endl;
	}
};
string Diamond :: ceoname = "Yash";
string Diamond :: comp_name="Nirav Modi Diamond Pvt Ltd";
int main()
{
	
	int i,n;
	cout << "Enter the Number of Diamond Comapny :"<<n<<endl;
	cin>>n;
	Diamond D1[n];
	for (i=0;i<n;i++)
	{
		cout << "Diamond Company Number :"<<i+1<<endl;
		D1[i].set();
		cout<< endl;
	}
	for (i=0;i<n;i++)
	{
		cout << "Diamond Company Number :"<<i+1<<endl;
		D1[i].get();
		cout<< endl;
	}

	
	
}


