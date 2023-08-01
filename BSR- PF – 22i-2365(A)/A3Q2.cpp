#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	int n, pw, temp, t;
	float ser, x;
	long int fact;
	pw = 1;
	fact = 1;
	t = 1;
	cout<<"Please enter N: ";
	cin>>n;
	cout<<"Please enter the x: ";
	cin>>x;	
	for (int i =1; i<= n; i++)
	{fact = 1;
	temp = t;
	pw = temp;	
	if (i%2 == 0)
		{while (pw!=0)
			{fact = fact * pw;
			pw--;}	
		
		
		ser = ser - (pow(x,temp)/fact);
		t = temp +2;}
	else
		{while (pw!=0)
			{fact = fact * pw;
			pw--;}	
		
		
		ser = ser + (pow(x,temp)/fact);
		t = temp +2;}

}
cout<<"sin ("<<x<<") = "<<ser;
}
