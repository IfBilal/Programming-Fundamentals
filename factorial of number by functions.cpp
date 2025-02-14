#include<iostream>
using namespace std;
int fact(int a)
{    int fact=1;
	for(a;a>0;a--)
	{
		fact=fact*a;
	}
	return fact;
}
int main()
{
	int num;
	cout<<"Enter number for factorial : ";
	cin>>num;
	cout<<"\nFactorial of number is : "<<fact(num);	
}
