#include <iostream>
using namespace std;

int main()
{
int x;
	int ar[4][4];
	cin>>x;
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j<4; j++)
		{
			if (i==0 && j==0)
			ar[i][j] = x;
			
			else if (i==1 && j==1)
			ar[i][j]  = 2*x;
			
			else if (i==2 && j ==2)
			ar[i][j] = 4*x;
			
			else if (i==3 && j==3)
			ar[i][j] = 8*x;
			
			else 
			ar[i][j] = 0;
		}
	}
	
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j<4; j++)
		{cout<<ar[i][j]<<"   ";
	}
	cout<<"\n";
}
}


