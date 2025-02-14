#include<iostream>
using namespace std;
swapByValue(int x,int y)
{
	x=x^y;
	y=x^y;
	x=x^y;
}
swapByReference(int &x,int &y)
{
	x=x^y;
	y=x^y;
	x=x^y;
}

int main()
{
	int x,y;
	cout<<"Enter value of x : ";
	cin>>x;
	cout<<"\nEnter value of y : ";
	cin>>y;
	swapByValue(x,y);
	cout<<"\nAfter Pass by value swap : \nx= "<<x<<" , y= "<<y;
	swapByReference(x,y);
	cout<<"\nAfter Pass by reference swap : \nx= "<<x<<" , y= "<<y;
}
