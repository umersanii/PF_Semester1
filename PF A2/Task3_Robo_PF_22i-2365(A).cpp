#include <iostream>
using namespace std;

int main()
{
	
	int inp, i, fact;
	cout<<"Please enter the input number you want to find the factorial of :"<<endl;
	cin>>inp;
	i = 1;
	fact = inp;
	cout<<"Factorial of "<<inp<<" = "<<inp<<"*";
	
	
while(i>0 && i<= inp)
	while(i>0 && i<= inp)
	{
		
		inp--;
		
		if (inp>0)
		{
		fact =fact * inp;
			if(inp!=1)
			{cout<<inp<<"*";}
			else
			{cout<<inp;
			}
		}
		else
		cout<<" = "<<fact<<endl;
		
		
	}
}
