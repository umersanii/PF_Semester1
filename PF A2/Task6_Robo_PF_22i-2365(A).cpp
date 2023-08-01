#include <iostream>
using namespace std;

int main()
{
	
int inp, i, oginp, rem, sum;
sum = 0;
cout<<"Enter an integer: "<<endl;
cin>>inp;
oginp = inp;
while(inp!=0)
{
	rem = inp%10;
	inp /= 10;
	sum += rem;
	i--;
	if(inp!=0)
	cout<<rem<<"+";
	else
	cout<<rem<<" = ";
}
cout<<sum;
		
}
