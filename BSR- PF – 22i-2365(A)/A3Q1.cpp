#include <iostream>
using namespace std;

int main()
{
	
	int inp,rem;
	cout<<"Please enter the integer : ";
	cin>>inp;
	
	while(inp!=0)
	{
		rem = inp%10;
		inp /= 10;
		cout<<rem;
		
	}
	
}
