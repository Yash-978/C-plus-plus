//Questions:
//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
#include<iostream>
using namespace std;
class Hotelrecord
{
	int id,age,i,h_staff,h_room_quantity,h_rating,h_staff_quantity,h_id;
	string h_type,h_location,city,line;
	static int h_established_year;
	static string h_name;
	public :
	void set()
	{
	
		cout << "Enter the Hotel id                   :";
		cin >> h_id;
		getline(cin ,line);

		cout << "Enter the Hotel Type                 :";
		getline(cin,h_type);
		cout << "Enter the Hotel Rating               :";
		cin >> h_rating;

		cout << "Enter the Hotel Location (city Name) :";
		cin >> h_location;		
		cout << "Enter the Hotel Room Quantity        :";
		cin >> h_room_quantity;
		cout << "Enter the Hotel Staff Quantity       :";
		cin >> h_staff_quantity;
		
		cout << endl;
		
	}
	void get ()
	{
	
		cout << "Hotel Name               :" << h_name << endl;
		cout << "Hotel ID                 :" << h_id << endl;
		cout << "Hotel Established Year   :" << h_established_year << endl;
		cout << "Hotel Type               :" << h_type << endl;
		cout << "Hotel Rating      		  :" << h_rating << endl;
		cout << "Hotel Location City Name :" << h_location << endl;
		cout << "Hotel Room Quantity      :" << h_room_quantity << endl;
		cout << "Hotel Staff Quantity     :" << h_staff_quantity;
		cout << endl;
	}
	
	
};
int Hotelrecord::h_established_year=2000;
string Hotelrecord :: h_name="Taj Hotel";
main()
{
	Hotelrecord H1[5];
	
	int i;
	for (i=0;i<5;i++)
	{
	
		H1[i].set();
	
		
	}
for (i=0;i<5;i++)
	{

		H1[i].get();
	}
}