#include <iostream>
#define n 10
using namespace std;

int main()
{int x,y;
x = n/2;
y = n-x;

int ar[n] = {1,2,3,4,5,6,7,8,9,10};
int ar1[x];
int ar2[y];

for (int i=0; i<=x; i++)
{ar1[i] = ar[i];
cout<<ar1[i];}
cout<<endl;

for (int i=y; i<n; i++)
{ar2[i] = ar[i];
cout<<ar2[i];}
cout<<endl;

for (int i=0; i<n; i++)
cout<<ar[i];

	
}



