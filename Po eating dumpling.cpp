#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,4,2,1};
	string arr2[5]={"","Grab dumpling", "Bite dumpling", "Chew dumpling", "Swallow dumpling"};
	int dump=1;
	while(dump!=0)
	{
	cout<<"Enter no of dumplings po wants to eat : ";
	cin>>dump;
	for(int k=0;k<dump;k++)
	{
		for(int o=0;o<5;o++)
		{
		cout<<arr2[arr[o]]<<endl;
	     }
	     cout<<endl;
	     
	     
	}
     }
     cout<<"\nPo is full! ";
}
