#include<iostream>
using namespace std;
int main()
{
	int a;
	bool prime=true;
	cout<<"Enter a number ";
	cin>>a;
	for(int b=2;b<=a-1;b++)
	{
		if(a%b==0)
		{
			prime =false;
			break;
		}
	}

	if(prime==true){
	
	cout<<"prime number";}
	else
	{
	cout<<"not a prime number";}
	return 0;
}

