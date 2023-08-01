#include <iostream>
using namespace std;

int main()
{

int n1,n2;
cout<<"Enter your department code "<<endl;
cin>>n1;
cout<<"Enter your Designation code "<<endl;
cin>>n2;

switch(n1)
{
	
	case 1: //n1=1
	switch(n2)
	{
		
		case 1:
			cout<<"You are Manager at Sales Department";
			break;
		case 2:
			cout<<"Your are Assistant Manager at Sales Department";
			break;
	}
	break;
	case 2:
	switch(n2)	
	{
			case 1:
			cout<<"You are Manager at Productions Department";
			break;
		case 2:
			cout<<"Your are Assistant Manager at Productions Department";
			break;
	}
	break;
	default:
	cout<<"Invalid Input";
}
}
