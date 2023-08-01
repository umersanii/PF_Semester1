#include <iostream>

using namespace std;

int main()
{
	int x, index, integer, temp, t2;
	cout<<"Enter the length of Array Elements"<<endl;
	cin>>x;
	
	int inp[20];
	for (int i=0; i<x; i++)
		{
			cout<<"Enter Element No "<<i+1<<endl;
			cin>>inp[i];
		}
	
	cout<<"Enter the index you want word to enter"<<endl;
	cin>>index;
	index--;
	cout<<"Enter the Integer you want to enter"<<endl;
	cin>>integer;
	
	
	for (int i=0; i<x+1; i++)
	{
		if(i==index)
		{
		temp = inp[i];
		inp[i]= integer;
		}
		
		else if (i<index)
		continue;
		
		else
		{
			
		t2 = inp[i];
		inp[i]= temp;
		temp = t2;
		}
		
	}
	
	for (int i = 0; i<=x; i++)
	{
		cout<<inp[i]<<endl;
		
	}
}
