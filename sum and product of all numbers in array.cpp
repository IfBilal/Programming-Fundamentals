#include<iostream>
using namespace std;
int main()
{
	int entry;
	int sum=0;
	int product=1;
	cout<<"Enter no of entries : ";
	cin>>entry;
	int arr[entry];
	for(int i=0;i<entry;i++)
	{
		cout<<"\nEnter value no "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0;i<entry;i++)
	{
		sum=sum+arr[i];
		product=product*arr[i];
	}
	cout<<"\nThe sum of all elements in array is : "<<sum;
	cout<<"\nThe product of all elements in array is : "<<product;
}
