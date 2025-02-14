#include<iostream>
#define PI 3.14
using namespace std;
double calculateArea(double radius)
{
	return PI*radius*radius;
}
double calculateArea(double length,double width)
{
	return length*width;
}
double calculateArea(double base,double height,bool isTriangle)
{
	return 0.5*base*height;
}
int main()
{
	while(true)
	{
	int shape;
	double area;
	bool triangle;
	double S1,S2;
	cout<<"\nEnter shape you want to get area for : \n1.Circle\n2.Rectangle\n3.Triangle\n";
	cin>>shape;
	while(shape<1 || shape >3)
	{
		cout<<"\ninvalid\n";
		cin>>shape;
		
	}
	switch(shape)
	{
	case 1:
		cout<<"Enter radius : ";
		cin>>S1;
		while(S1<=0)
		{
			cout<<"\ninvalid\n";
			cout<<"Enter radius : ";
			cin>>S1;
		}
		
		area=calculateArea(S1);
		cout<<"Area is : "<<area;
		break;
	case 2:
		cout<<"\nEnter length : ";
		cin>>S1;
		while(S1<=0)
		{
			cout<<"\ninvalid\n";
			cout<<"\nEnter length : ";
		cin>>S1;
		}
		cout<<"\nEnter Width : ";
		cin>>S2;
		while(S2<=0)
		{
			cout<<"\ninvalid\n";
			cout<<"\nEnter Width : ";
			cin>>S2;
		}
		area=calculateArea(S1,S2);
		cout<<"\nArea is : "<<area;
		break;
	case 3:
		triangle=1;
		cout<<"\nEnter base : ";
		cin>>S1;
		while(S1<=0)
		{
			cout<<"\ninvalid\n";
			cout<<"\nEnter base : ";
		cin>>S1;
		}
		cout<<"\nEnter height : ";
		cin>>S2;
		while(S2<=0)
		{
			cout<<"\ninvalid\n";
			cout<<"\nEnter height : ";
			cin>>S2;
		}
		area=calculateArea(S1,S2,triangle);
		cout<<"\nArea is : "<<area;
		break;
	}
}
}
