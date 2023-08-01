#include <iostream>
using namespace std;

int main()
{

int date1, year1, mon1, date, year, mon;
cout<<"Enter date, month and year respectively"<<endl;
cin>>date>>mon>>year;
cout<<"Enter date, month and year respectively again"<<endl;
cin>>date1>>mon1>>year1;

if ((date&&mon&&year) < (date1&&mon1&&year1))
	cout<<date<<" / "<<mon<<" / "<<year<<" is earlier than "<<date1<<" / "<<mon1<<" / "<<year1;
else 
	cout<<date<<" / "<<mon<<" / "<<year<<" is not earlier than "<<date1<<" / "<<mon1<<" / "<<year1;
}


