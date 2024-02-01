//Q.2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
//For example,
//Input:
//Enter seconds: 4520
//
//Output:
//1:15:20
#include<iostream>
using namespace std;

class Time 
{
	public :
	int ss,mm,hh;
	void Tme ()
	{
		int hh,mm,ss;
		cout << "Enter the second :";
		cin>>ss;
		hh= ss/3600;
		ss = ss%3600;
		
		mm=ss/60;
		ss=ss%60;
		cout << hh <<" hh "<<mm<<" mm "<<ss<<" ss ";
	}
	
};
main()
{
	Time Tme1;
	
	Tme1.Tme(); 
	return 0;
}
