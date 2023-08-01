#include <iostream>
using namespace std;

int main()
{
	int start,stay,tts,out;
	
	cout<<"On which day you want to start a trip :";
	cin>>start;
	cout<<endl<<"How many days you want to spend on Trip :";
	cin>>stay;
	tts = start + stay;
	out = tts%7;
	cout<<endl<<"You will return on day : "<<out;
	
}
