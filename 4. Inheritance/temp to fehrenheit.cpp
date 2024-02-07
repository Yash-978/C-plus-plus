//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
//- Class P has the following members: temperature attribute in float
//- Class Q has the following members: toFehrenheit() method
//- Class R has the following members: toKelvin() method.
#include<iostream>
using namespace std;
class P
{
	protected :
	float temperature;
		
};
class Q : public P
{
	public :
	void input()
	{
		cout << "Enter the Temperature :";
		cin >>temperature;
		
	}
	void tofehrenheit()
	{
		float fehrenheit = temperature*1.8+32;
		cout  << "Feherenheit = " << fehrenheit << endl;
	}	


};
class R : public Q
{    //(89.6°F − 32) × 5/9 = 32°C

	public :
	void toKelvin()
	{
		float kelvin =temperature + 273 ;
		cout  << "Celsius : " << kelvin << endl;
	}	
};

int main ()
{
	R r1;
	r1.input();
	r1.tofehrenheit();
	r1.toKelvin();

}
