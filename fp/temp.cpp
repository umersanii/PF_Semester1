#include <iostream>
#define n 2
#include <iomanip>
#include "displayf.h"
using namespace std;


int main()
{int temp[2][2]; int nr =2;
int mat[3][3] = {{1,2},{3,4}};
mat[0][0] = temp[0][0];
mat[0][0] = mat[1][1];
mat[1][1] = temp[0][0];

mat[1][0] *= -1;
mat[0][1] *= -1;


	
	for (int i=0; i<nr; i++)
	{
		for (int j=0; j<nr; j++)
		{
			cout<<setw(4)<<" "<<mat[i][j];}
	cout<<"\n";
}
}





//cout<<setw(4)<<a[0][0]<<setw(4)<<a[0][1]<<setw(4)<<a[0][2]<<setw(4)<<endl;
//cout<<setw(4)<<a[1][0]<<setw(4)<<a[1][1]<<setw(4)<<a[1][2]<<setw(4)<<endl;
//cout<<setw(4)<<a[2][0]<<setw(4)<<a[2][1]<<setw(4)<<a[2][2]<<setw(4)<<endl;
