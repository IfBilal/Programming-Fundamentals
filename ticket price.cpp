#include<iostream>
using namespace std;
int main()
{
	int distance,age,time;
	double price;
	bool freq;
	cout<<"Enter the distance you will travel "<<endl;
	cin>>distance;
	cout<<"Enter your age "<<endl;
	cin>>age;
	cout<<"Enter the Time in your flight "<<endl;
	cin>>time;
	cout<<"Enter 1 if you are a frequent flyer otherwise enter 0"<<endl;
	cin>>freq;
	if (distance>0 && distance<500)
	price=50;
	else if(distance>=500 && distance<1000)
	price=100;
	else if(distance>=1000)
	price=200;
	else
	cout<<" ";
	if(age>0 && age<12)
	price=price-(price/100)*50;
	else if (age>60)
	price=price-(price/100)*30;
	else
	cout<<" ";
	if(time<48)
	price=price+(price/100)*20;
	if(freq==1)
	price=price-(price/100)*10;
	cout<<"\nThe price of your ticket is "<<price<<"$";
	return 0;
	}
