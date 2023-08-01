#include <iostream>
using namespace std;

Swapping (int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
int main()
{
          int x,y;
          cin>>x>>y;
    Swapping(x, y); 
    cout << "x =  " << x << "  &  y =  " << y;
    return 0;
}


