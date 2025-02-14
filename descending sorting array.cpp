#include<iostream>
using namespace std;
int main()
{
	int num,count=0,temp;
	cout<<"Enter no of elements in array : ";
	cin>>num;
	
	int arr[num];
	for(int i=0;i<num;i++)
	{
	cout<<"\nEnter element no "<<i+1<<" of array : ";
	cin>>arr[i];
	}
	
	while(1)
	{ int check=0;
	for(int p=0;p<num-1;p++)
	{
		if(arr[p]<arr[p+1])
		{
			temp=arr[p];
			arr[p]=arr[p+1];
			arr[p+1]=temp;
			count++;
			check++;
		}
		
	}
	if(check==0)
		goto end;	  
		
	}
	end:
		cout<<"No of swaps taken are : "<<count<<endl;
	cout<<"The sorted array is : { ";
	for(int k=0;k<num;k++)
	{
		cout<<arr[k]<<" ";
	}
	cout<<"}";
	}
