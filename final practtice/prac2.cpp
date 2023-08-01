#include <iostream>
using namespace std;

void inp(int &nume, int &deno)
{
	cout<<"Nume?"<<endl;
	cin>>nume;
	cout<<"Deno?"<<endl;
	cin>>deno;
	
}

float per(float nume, int dno)
{
	float perc = 0;
	nume = float (nume*1.0);
	perc = float (nume/dno)*100;
	return perc;
}

void disp (float perc)
{
	if(perc<=30)
	cout<<"poor";
	else if (perc>30 && perc<=70)
	cout<<"good";
	else if (perc>70 && perc <100)
	cout<<"fucking beautiful sir";
}
int main()
{int nume, deno;
	inp(nume, deno);
	
float perc = per(nume, deno);

disp(perc);
}
