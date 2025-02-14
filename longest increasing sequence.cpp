#include<iostream>
using namespace std;
int main()
{
	int num,tempmax,max=0;
	cout<<"Enter no of elements in array : ";
	cin>>num;
	
	int arr[num];
	for(int i=0;i<num;i++)
	{
	cout<<"\nEnter element no "<<i+1<<" of array : ";
	cin>>arr[i];
	}
	for(int k=0;k<num-1;k++)
	{
		if(arr[k]<arr[k+1])
		tempmax+=1;
	
	else if(tempmax>max)
	{
		max=tempmax;
		tempmax=0;
	}
	if(k==num-2 )
	if(tempmax>max)
	{
		max=tempmax;
	}
}
cout<<"Highest increasing sequence is : "<<max;
}
