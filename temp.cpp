#include <iostream>
using namespace std;

int main()
{
	int m[3][5] = {{1,2,3,4,5},{2,4,6,8,10},{1,3,5,7,9}};
	int inp;
	cout<<"Enter madafaka ";
	cin>>inp;
	
	for (int i = 0; i<3; i++)
	{if (i == 0)
	cout<<"From natural"<<endl;
	else if (i == 1)	
	cout<<"From even"<<endl;
	else
	cout<<"From odd"<<endl;
	
	for (int j = 1; j<5;j++)
			{
			for (int k = 0; k<5; k++)
				{
							
				if(m[i][j] + m[i][k] == inp )
				{
				cout<<m[i][j]<<" + "<<m[i][k]<<" = "<<m[i][j] + m[i][k]<<endl;}
			}
			}
	}
	
}
