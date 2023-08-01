#include <iostream>
using namespace std;

int main()
{
	
int inp, i, oginp, rem, sum;
sum = 0;
cout<<"Enter a positive 4 digit integer: "<<endl;
cin>>inp;
i = 4;
oginp = inp;
while(i!=0)
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
