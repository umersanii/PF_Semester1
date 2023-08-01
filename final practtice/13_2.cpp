#include <iostream>
using namespace std;

Factor (int x)
{
	int factor = 1;
	while (x!=0)
	{factor *= x;
	x--;
	}
	return factor;
}
int main()
{
          int x;
          cout<<"Enter a number N:\t";
          cin>>x;
    cout << "Factorial of x =  " << Factor(x);
    return 0;
}



