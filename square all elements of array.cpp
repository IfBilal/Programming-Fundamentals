#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter element "<<i+1<<" of array : ";
		cin>>arr[i];
	}
	cout<<"\nThe elements of the array are : \n";
	for(int j=0;j<5;j++)
	{
		cout<<arr[j]<<"  ";
	}
	cout<<"\nThe elements after squaring are : \n";
	for(int k=0;k<5;k++)
	{
		cout<<arr[k]*arr[k]<<"  ";
	}
}
