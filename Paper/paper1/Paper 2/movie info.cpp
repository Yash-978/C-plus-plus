//1. Create a class representing a `Movie` with attributes like `title`, `genre`, and `releasedYear`.
// Demonstrate the instantiation of objects using array and accessing their attributes.
#include<iostream>
using namespace std;
class Movie
{
	protected :
	string title,genre;
	int year;
	public :
	void set()
	{
		cout<<"Enter the Movie Title :";
		getline(cin,title);
		cout<<"Enter the Movie Genre : ";
		getline(cin,genre);
		cout<<"Enter the Movie Releadesed Year : ";
		cin>>year;
		
	}
	void get()
	{
		cout<<"Movie Title : "<<title<<endl;
		cout<<"Movie Genre : "<<genre<<endl;
		cout<<"Movie Released Year : "<<year<<endl;
		
	}
	
};
main()
{
	Movie m1[3];
	m1[0].set();
	m1[0].get();
	
	
	
}

