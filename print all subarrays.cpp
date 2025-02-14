#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter no of values in array : ";
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		cout<<"\nEnter element no "<<i+1<<" of array : ";
		cin>>arr[i];
	}
	for(int start=0;start<num;start++)
	{
		for(int end=start;end<num;end++)
		{
			for(int i=start;i<=end;i++)
			cout<<arr[i];
				cout<<" ";
		}
	cout<<endl;
	}
	
}

