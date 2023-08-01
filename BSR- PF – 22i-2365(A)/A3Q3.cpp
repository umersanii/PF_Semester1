#include <iostream>
using namespace std;

int main()
{
while(1)
{

int inp;
cout<<"Enter your choice to print a pattern, or 6 to exit: ";
cin>>inp;


if (inp==1)
{
	for
	(int i=1; i<=10; i++)
	{
		for (int j=1; j<=i; j++)
		{cout<<"*";}
		cout<<endl;
	}
cout<<endl;	
}
else if (inp==2)
{
	for(int i=10; i>=1; i--)
	{
		for (int j=1; j<=i; j++)
		{cout<<"*";}
		cout<<endl;
	}
cout<<endl;
}


else if (inp==3)
	{
	for(int i=1; i<=10; i++)
	{
		for (int l=9; l>=i; l-- )
		{
			
		cout<<" ";
		}
		
		for (int j=1; j<=i; j++)

		{cout<<"*";}
		cout<<endl;

	}

cout<<endl;
}

else if(inp == 4)
{

	for(int i=10; i>=1; i--)
	{
		for (int l=9; l>=i; l-- )
		{
			
		cout<<" ";
		}
		
		for (int j=1; j<=i; j++)

		{cout<<"*";}
		cout<<endl;

	}

cout<<endl;
}
else if (inp == 5)
{
	for(int i=1; i<=5; i++)
	{
		for (int l=5; l>=i; l-- )
		{
			
		cout<<" ";
		}
		
		for (int j=1; j<=i; j++)

		{cout<<"*";}
		for (int j=2; j<=i; j++)

		{cout<<"*";}
		for (int l=5; l>=i; l-- )
		{
			
		cout<<" ";
		}
cout<<"\n";
	}
		for(int i=4; i>=1; i--)
	{
		for (int l=5; l>=i; l-- )
		{
			
		cout<<" ";
		}
		
		for (int j=1; j<=i; j++)

		{cout<<"*";}
		for (int j=2; j<=i; j++)

		{cout<<"*";}
		for (int l=5; l>=i; l-- )
		{
			
		cout<<" ";
		}
cout<<"\n";
}

}
else
break;
}
}
