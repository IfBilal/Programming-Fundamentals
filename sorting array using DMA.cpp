#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	int count=0;
	int *ptr= new int[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter element "<<i+1<<" of array : ";
		cin>>*(ptr+i);
	}
	while(true)
	{
		count=0;
	for(int i=0;i<size-1;i++)
	{
		if(*(ptr+i) > *(ptr+i+1))
		{
		*(ptr+i)=*(ptr+i) + *(ptr+i+1);
		*(ptr+i+1)=*(ptr+i)-*(ptr+i+1);
		*(ptr+i)=*(ptr+i) - *(ptr+i+1);
		count++;
		}
	}
	if(count==0)
	break;
	}
	cout<<"\nSorted array is : ";
	for(int i=0;i<size;i++)
	{
		cout<<*(ptr+i)<<"  ";
	}
 } 
