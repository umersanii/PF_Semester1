#include <iostream>
using namespace std;

int main()
{
	int items,fprice=228;
	float discount,discount1, discount2, discount3, bill, bill1, bill2, bill3;
	cout<<"Enter number of items you purchased \t";
	cin>>items;
	bill = items * 228;
	if (items < 5 &&  items > 0 )
	
		{
		cout<<"Total bill without discount "<<bill<<endl;
		discount = 0.05 * bill;
		bill1 = bill - discount;
		cout<<endl<<"Your discount is . "<<discount<<endl;
		cout<<"Your discounted bill is "<<bill1<<endl<<endl;
		}
	else if (items > 5  &&  items <15)
		{
		cout<<"Total bill without discount "<<bill<<endl;
		discount2 = 0.15 * bill;
		bill2 = bill - discount2;
		cout<<endl<<"Your discount is . "<<discount2<<endl;
		cout<<"Your discounted bill is "<<bill2<<endl<<endl;}
		
	else
		{
		cout<<"Total bill without discount "<<bill<<endl;		
		discount3 = 0.3 * bill;
		bill3 = bill - discount3;
		cout<<"Your discount is . "<<discount3<<endl;
		cout<<"Your discounted bill is "<<bill3<<endl;}
}
