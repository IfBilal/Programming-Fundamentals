#include<iostream>
using namespace std;
calculateAverage(int arr[],int size)
{
	double avg;
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	avg=(sum*1.0)/(size*1.0);
	cout<<"\nAverage is : "<<avg;	
}
findMaximum(int arr[],int size)
{
	int max;
	max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"\nMaximum number is : "<<max;
}
countEvenNumbers(int arr[],int size)
{
	int even=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		even++;
	}
	cout<<"\nNo of even numbers are : "<<even;
}

int main()
{
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	while(size<=0)
	{
		cout<<"\nInvalid\n";
		cout<<"Enter size of array : ";
		cin>>size;	
	}
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter element "<<i+1<<" of array : ";
		cin>>arr[i]; 
	}
	calculateAverage(arr,size);
	findMaximum(arr,size);
	countEvenNumbers(arr,size);
}
