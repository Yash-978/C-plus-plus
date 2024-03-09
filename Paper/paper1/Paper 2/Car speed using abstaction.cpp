//3. Define a base class `Vehicle` with private attributes `model` and `speed`. 
//.Implement public member functions for setting and getting these attributes.
//Derive two classes, `Car` and `Bike`, from the `Vehicle` class.
//Implement methods to calculate the time taken for a certain 
//distance based on the speed of each vehicle. Demonstrate
//abstraction by calling the time calculation methods for both `Car` and `Bike`.
#include<iostream>
using namespace std;
class Vehicle
{
	protected :
	string model;
	int speed,distance,time;
	
		virtual void calculate()=0;
	public:
	void set()
	{
		cout<<"Enter the  Model : ";
		getline(cin,model);
		
	}	
	void get()
	{
		cout<<"Model : " << model<<endl;
		cout<<"Speed : " << speed<<endl;
	}
	
	


};
class Car : public Vehicle 
{
	public :
		void calculate()
		{
			set();
			cout <<"Enter The Car Speed : ";
			cin>>speed;
			cout<<"Enter the distance : ";
			cin>>distance;
			time=distance/speed; 
			
			cout<<"Car Time : "<<time<<endl;
			
			
			
		}
};
class Bike : public Vehicle 
{
	public :
	void calculate()
		{
			set();
			cout <<"Enter The Bike Speed : ";
			cin>>speed;
			cout<<"Enter the distance : ";
			cin>>distance;
			time=distance/speed; 
			
			cout<<"Bike Time : "<<time<<endl;
			
			
			
		}
};


main()
{
	Car c1;
	c1.calculate();
	Bike b1;
	b1.calculate();
	
}

