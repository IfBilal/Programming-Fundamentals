#include<iostream>
using namespace std;
int main()
{     
     int val;
     cout<<"Enter numbers of values you want in array : ";
     cin>>val;
     bool unique=true;
     int arr[val];
     for(int i=0;i<val;i++)
     {
     	cout<<"Enter value no "<<i+1<<" of array : ";
     	cin>>arr[i];
	}
	cout<<"\nthe unique values in array are : ";
	for(int i=0;i<val;i++)
	{
		for(int j=0;j<val;j++)
		{    unique=true;
		
		     if(i==j && j!=val-1)
		     continue;
		     if (j==val-1 && i==val-1)
		     goto end;
		     
			if(arr[i]==arr[j])
			{
			unique=false;
			break;
			}else 
			unique=true;
			end:
			if(unique==true && j==val-1)
			cout<<arr[i]<<" ";
		}
	}
	
}
