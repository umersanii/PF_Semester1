#include <iostream>
using namespace std;

float Sequence(int &a1, int &a2, int N)
{
	int sum;
	sum = a1 + a2;
	a1 = a2;
	a2 = sum;
	return sum;
	
}
int main()
{
    int a1 = 0, a2 = 1, N; //* N is the number of terms
    cout << "Enter the number of terms:\t";
    cin >> N;
    cout << a1 << "  , ";
    cout << a2 << " ";
    for (int i = 1; i <= N - 2; i++)
    {
        cout << " , " << Sequence(a1, a2, N) << " ";
    }
}

