#include<iostream>
using namespace std;
int main()
{
	int entry,min=INT_MAX,max=INT_MIN;
	int index1,index2,high,low;
	cout<<"Enter no of values : ";
	cin>>entry;
	int arr[entry];
	for(int i=0;i<entry;i++)
	{
		cout<<"\nEnter value of number "<<i+1 <<" : ";
		cin>>arr[i];
	}
	 for(int i=0;i<entry;i++)
	 {
	 	if(arr[i]<min)
	 	{
	 	min=arr[i];
	 	index1=i;
	 	}if(arr[i]>max)
	 	{
		 max=arr[i];
		 index2=i;
	     }

	 }
	 cout<<"\nArray before swapping is : {";
	 for(int j=0;j<entry;j++)
	 {
	 cout<<arr[j]<<",";
      }
      cout<<"}";
      arr[index1]=arr[index1]+arr[index2];
      arr[index2]=arr[index1]-arr[index2];
      arr[index1]=arr[index1]-arr[index2];
      
	 cout<<"\nArray after swapping is : {";
	 for(int j=0;j<entry;j++)
	 {
	 cout<<arr[j]<<",";
      }
      cout<<"}";
}
