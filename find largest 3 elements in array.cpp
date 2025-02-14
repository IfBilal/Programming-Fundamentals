#include<iostream>
using namespace std ;
int main()
{
	int num,num1,num2,num3;
	cout<<"Enter no of elements in the array : ";
	cin>>num;
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		cout<<"\nEnter element no "<<i+1 << " of array : ";
		cin>>arr[i];
	}
	
	num1=INT_MIN;
	for(int i=0;i<num;i++)
	{
		if(num1<arr[i])
		{
		num1=arr[i];
	     }
	}
	for(int i=0;i<num;i++)
	{
		if(num1==arr[i])
		{
		arr[i]=INT_MIN;
		break;
	}
}
	num2=INT_MIN;
	for(int i=0;i<num;i++)
	{
		if(num2<arr[i])
		{
		num2=arr[i];
	     }
}
for(int i=0;i<num;i++)
	{
		if(num2==arr[i])
		{
		arr[i]=INT_MIN;
	     break;
		}
	}
		num3=INT_MIN;
	for(int i=0;i<num;i++)
	{
		if(num3<arr[i])
		
		num3=arr[i];
}
	     for(int i=0;i<num;i++)
	{
		if(num3==arr[i])
	     {
				arr[i]=INT_MIN;
	break;}
	}
	cout<<"\nThe three highest numbers in array are : "<<num1<<"  "<<num2<<"  "<<num3;
}

