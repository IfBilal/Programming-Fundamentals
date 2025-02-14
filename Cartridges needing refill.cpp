#include<iostream>
using namespace std;
int main()
{
	int arr[8],check[8],refill;

	for(int i=0;i<8;i++)
	{start:
		cout<<"\nEnter fluid level of Cartridge no "<<i+1<<endl;
		cin>>arr[i];
		if(arr[i]<0 || arr[i]>100)
		{ cout<<"Invalid \n";
		goto start;
	}
}
	cout<<"Fluid level of cartridges are :  ";
	for(int j=0;j<8;j++)
	{
		cout<<arr[j]<<"%    ";
	}
	for(int i=0,k=0;k<8;k++)
	{
		if(arr[k]<50)
		{
		check[i]=arr[k];
	      refill+=1;
	      i++;
		 }
		
	}
	cout<<"\nCartridges with these percentages need refill :  ";
	for(int j=0;j<refill;j++)
	{
		cout<<check[j]<<"%  ";
	}
	cout<<"\nTotal Cartridges needing refill : "<<refill;
}
