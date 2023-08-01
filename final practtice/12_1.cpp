#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	char inp[100];
	cout<<"Input: "<<endl;
	cin.getline(inp, 100);
	
	int x = strlen(inp);
	
	
	int s = x;
	for (int i = x-1; i!=-1; i--)
	{
		cout<<inp[i];
	}
}

