#include<iostream>
using namespace std;
main()
{
	int x,n,i;
	cout << "Enter the amount of n :";
	cin >> n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cout << "Enter the elements in array a[%d] :",i;
		cin >> a[i];
	}
	for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				cout << a[i]<<endl;
			}
		}
}
