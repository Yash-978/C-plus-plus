#include<iostream>
using namespace std;
main()
{
 	int totalyear,i,lastyear,styear,total,j=0;
	cout << "Enter the starting year :";
	cin >> styear;
	cout << "Enter the Last Year :";
	cin >> lastyear;
	
	total=lastyear-styear;
	totalyear=total/4+1; 
	int a[totalyear];
	for (i=styear;i<=lastyear;i++)
	{
		if (i % 4 ==0)
		{
			a[j]=i;
			j++;
		}
	}
	cout << "The Total leap year are ";
	for(i=0; i<j; i++)
	{
		cout << a[i]<< "  ";
	}
	
			
}

