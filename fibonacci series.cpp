#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter number till which you want to print your fibonacci series : ";
	cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {  if (i==0)
    {
     arr[i]=0;
    	cout<<arr[i]<<" ";
    }	else if (i==1)
    {  arr[i]=1;
    	cout<<arr[i]<<" ";
    }
    else
    {
    arr[i]=arr[i-2]+arr[i-1];
    cout<<arr[i]<<" ";
    }
    }
}
