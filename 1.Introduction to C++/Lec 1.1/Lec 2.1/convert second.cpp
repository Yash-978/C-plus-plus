#include<iostream>
using namespace std;
main()
{
	int second,minute,hour,remainsecond;
	cout <<"Enter the second "<<endl;
	cin >> second;
	
	minute=(second%3600)/60;
	hour=second/3600;
	remainsecond=second%60;
	cout << "Time is :"<<hour<<"/"<<minute<<"/"<<remainsecond<<endl;


}