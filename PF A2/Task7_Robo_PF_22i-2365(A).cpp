#include <iostream>
using namespace std;

int main()
{
float tt = 0;
float sum = 0;
double ave;
int i = 1;

while(1)
{
	
int inp, i, max, min;

cout<<"Enter integer : "<<endl;
cin>>inp;
tt++;
sum += inp;
ave = sum/tt;
i++;

if (i==1)
{max = inp;
min = inp;}
else
{max = max;
min = min;}

if (inp > max)
	max = inp;
else if (inp < min)
	min = inp;

cout<<"Average "<<ave<<"   "<<"Min "<<min<<"    "<<"Max "<<max<<endl;
}
}
