#include<iostream>
using namespace std;
int main()
{ int num;
int ones=0;
	cout<<"Enter a number : ";
	cin>>num;
	while(num<0)
	{
		cout<<"Invalid\nEnter a positive number : ";
		cin>>num;
	}
	while(num!=0)
	{
		if(num%2==1)
          ones=ones+1;
          num=num/2;
			}
			cout<<"\nThe number of ones are : "<<ones;
}
