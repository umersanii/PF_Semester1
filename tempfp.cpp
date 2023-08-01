#include <iostream>
#include <math.h>

using namespace std;

void dispmat(int mat[2][2])
{
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout<<" "<<mat[i][j];}
	cout<<"\n";
	}
}


int input, nr, nc;


int main()
{
	nr = 2;
	
int mat [2][2] = {{1,2},{3,4}};
			
dispmat(mat);
	}
	






