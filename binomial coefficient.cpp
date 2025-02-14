#include<iostream>
using namespace std;

int fact(int a)
{
	int fact=1;
	for(a;a>0;a--)
	{
		fact=fact*a;
	}
	return fact;
}
int main()
{
	int n,r;
	cout<<"Enter value of n : ";
	cin>>n;
	cout<<"\nEnter value of r : ";
	cin>>r;
	int first=fact(n);
	int second=fact(r);
	int third= fact(n-r);
	cout<<"\nThe binormial coefficient will be : "<<first/(second*third);
	
}
