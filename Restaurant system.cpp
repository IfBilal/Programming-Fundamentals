#include<iostream>
using namespace std;
int main()
{    int num;
	int arr[5]={0,0,0,0,0};
	int cost=0;
	while(num!=-1)
	{
	   start:
		cout<<"Enter -1 to finish\n\nEnter 1 for Chicken Biryani \n2 for Mutton Biryani  \n3 for Vegetable Biryani \n4 for Fish Biryani \n5 for Special Biryani\n";
		cin>>num;
	switch(num)
	{
		     case 1:
			arr[0]++;
			cost+=10;
			break;
			case 2:
			arr[1]++;
			cost+=12;
			break;
			case 3:
			arr[2]++;
			cost+=8;
			break;
			case 4:
			arr[3]++;
			cost+=11;
			break;
			case 5:
			arr[4]++;
			cost+=15;
			break;
	          }
			if(num!=-1 &&(num==0 || num>5  || num<-1))
	          {
			cout<<"Invalid \n";
	          goto start;  
}
} 
if(arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==0 && arr[4]==0)
	cout<<"No Biryanis sold "<<endl;
		else
		{
		cout<<"No of Chicken Biryani sold : "<<arr[0]<<endl;
		cout<<"No of Mutton Biryani sold : "<<arr[1]<<endl;
		cout<<"No of Vegetable Biryani sold : "<<arr[2]<<endl;
		cout<<"No of Fish Biryani sold : "<<arr[3]<<endl;
		cout<<"No of Special Biryani sold : "<<arr[4]<<endl;
	}
	if(arr[0]>=arr[1] && arr[0]>=arr[2] && arr[0]>=arr[3] && arr[0]>=arr[4])
	cout<<"Chicken Biryani is the most popular biryani "<<endl;
	if(arr[1]>=arr[0] && arr[1]>=arr[2] && arr[1]>=arr[3] && arr[1]>=arr[4])
	cout<<"Mutton Biryani is the most popular biryani "<<endl;
	if(arr[2]>=arr[1] && arr[2]>=arr[0] && arr[2]>=arr[3] && arr[2]>=arr[4])
	cout<<"Vegetable Biryani is the most popular biryani "<<endl;
	if(arr[3]>=arr[1] && arr[3]>=arr[2] && arr[3]>=arr[0] && arr[3]>=arr[4])
	cout<<"Fish Biryani is the most popular biryani "<<endl;
	if(arr[4]>=arr[1] && arr[4]>=arr[2] && arr[4]>=arr[3] && arr[4]>=arr[0])
	cout<<"Special Biryani is the most popular biryani "<<endl;
cout<<"The Total cost is : $"<<cost;
cout<<"\nThe Total no of units sold are "<<arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]<<endl;
}

