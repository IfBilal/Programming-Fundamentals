#include<iostream>
using namespace std;
int main()
{
	int val1,val2;
	cout<<"Enter no of values you want to put in array 1 : ";
	cin>>val1;
	cout<<"\nEnter no of  values you want to put in array 2 : ";
	cin>>val2;
	int arr1[val1];
	for(int k=0;k<val1;k++)
	{
	cout<<"\nEnter value no "<<k+1<<" of first array : ";
	cin>>arr1[k];
	}
	int arr2[val2];
	for(int m=0;m<val2;m++)
	{
		cout<<"\nEnter value no "<<m+1<< " of second array : ";
		cin>>arr2[m];
	}
	cout<<"\nThe intersection of the arrays is : ";
	for(int i=0;i<val1;i++)
	{
		for(int j=0;j<val2;j++)
		{
			if(arr1[i]==arr2[j])
		{
		cout<<arr1[i]<<"  ";
		break;
		}
		}
	}
}





