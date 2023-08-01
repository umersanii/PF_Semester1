#include <iostream>
using namespace std;

int array_Min_Max(int array[5], int &Min)
{int Max;
	for (int i = 0; i<5; i++)
	{
		if (array[i]>Max)
		Max=array[i];
		else if (array[i]<Min)
		Min=array[i];
	}
	return Max;
	
	
}
int main()
{
    int size = 5, Min = 0, Max;
    int array[5] = {12, 25, 1, -5, 10};
    Max = array_Min_Max(array, Min);
    cout << "Minimum number in the Array : " << Min << endl;
    cout << "Maximum number in the Array : " << Max << endl;
    return 0;
}

