#include<iostream>
using namespace std;

void calculateVolume(double side,double height =-1 , double width=-1)
{
	if(height==-1 && width==-1)
	cout<<"Volume of cube is : "<<side*side*side;
	else if(width==-1)
	cout<<"Volume of rectangle is : "<<side*height;
	else
	cout<<"Volume of rectangle is : "<<side*height*width;

	
}
int main()
{
	double S1,S2,S3;
	int sides;
	cout<<"Enter sides you want to enter : ";
	cin>>sides;
	while(sides<1 || sides>3)
	{
		cout<<"\nInvalid\n";
		cout<<"Enter sides you want to enter : ";
		cin>>sides;
	}
	switch(sides)
	{
		case 1 :
			cout<<"\nEnter side : ";
			cin>>S1;
			while(S1<=0)
			{
				cout<<"\nInvalid \n";
				cout<<"\nEnter side : ";
				cin>>S1;	
			}
			calculateVolume(S1);
		break;
		case 2 :
			cout<<"\nEnter side : ";
			cin>>S1;
			while(S1<=0)
			{
				cout<<"\nInvalid \n";
				cout<<"\nEnter side : ";
				cin>>S1;	
			}
			cout<<"\nEnter side : ";
			cin>>S2;
			while(S2<=0)
			{
				cout<<"\nInvalid \n";
				cout<<"\nEnter side : ";
				cin>>S2;	
			}
			calculateVolume(S1,S2);
		break;
		case 3 :
			cout<<"\nEnter side : ";
			cin>>S1;
			while(S1<=0)
			{
				cout<<"\nInvalid \n";
				cout<<"\nEnter side : ";
				cin>>S1;	
			}
			cout<<"\nEnter side : ";
			cin>>S2;
			while(S2<=0)
			{
				cout<<"\nInvalid \n";
				cout<<"\nEnter side : ";
				cin>>S2;	
			}
			cout<<"\nEnter side : ";
			cin>>S3;
			while(S3<=0)
			{
				cout<<"\nInvalid \n";
				cout<<"\nEnter side : ";
				cin>>S3;	
			}
			calculateVolume(S1,S2,S3);
		break;
	}
	
}
