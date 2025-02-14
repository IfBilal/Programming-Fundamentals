#include<iostream>
using namespace std;
int main()
{
	
	
	int binary=0;
	int x;
	cout<<"\nEnter a positive number : ";
	cin>>x;
	
	int position=1;
	
	while(x>0)
	{
		binary = binary + (x%2)*position;
		position*=10;
		x=x/2;
	}
	cout<<binary;
	
	return 0; }
