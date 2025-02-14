#include<iostream>
using namespace std;
int main()
{    int arr[8],j=0,i=0;
     int master=0;
     int arr2[8];
     for(i=0;i<8;i++)
     {
     start:
	cout<<"\n\nIruka Sensei Enter your "<<i+1<<" hand sign from \n1 for Tiger \n2 for snake \n3 for dragon \n4 for monkey \n5 for bird \n";
	cin>>arr[i];
	if(arr[i]<=0 || arr[i]>5)
	{
		cout<<"\ninvalid";
	goto start;
	}
}
	for( j=0;j<8;j++)
	{ start2:
	cout<<"\n\nNaruto Enter your "<<j+1<<" hand sign from \n1 for Tiger \n2 for snake \n3 for dragon \n4 for monkey \n5 for bird \n";
     cin>>arr2[j];
     if(arr2[j]<=0 || arr2[j]>5)
	{
		cout<<"\ninvalid";
	goto start2;
	}
    
	}
	
	for(int k=0;k<8;k++)
	{
		if(arr[k]==arr2[k])
		{
		master+=1;
		cout<<"sign "<<k+1<<" is correct "<<endl;
	}
		else
		cout<<"sign "<<k+1<<" is incorrect "<<endl;
	}
	cout<<"\nNaruto got "<<master<<" hand signs correct \n";
	if(master>=6)
     cout<<"Naruto is a master ";	
     if(master==8)
     cout<<"\nCorrect! ";
     else
     cout<<"\nWrong! ";
     
     
	
}
