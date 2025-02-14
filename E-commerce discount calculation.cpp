#include<iostream>
#include<string>
using namespace std;
int main()
{
	int price;
	bool user;
	bool couponcode;
	bool card;
     int percent;
     cout<<"Enter the base price "<<endl;
     cin>>price;
     cout<<"\nPress 1 if ur a new user otherwise press 0 "<<endl;
	cin>>user;
	cout<<"Press 1 if u want to pay through credit card otherwise press 0"<<endl;
	cin>>card;
	cout<<"\nPress 1 if u want to apply a coupon code otherwise press 0 "<<endl;
	cin>>couponcode;
	if(user==1)
     price= price-(price/100)*15;
     if(price>1000)
     price=price-(price/100)*5;
     if(card==1 && user==0)
     price=price-(price/100)*2;
     if(couponcode==1)
	{
		cout<<"\nEnter the percentage of discount "<<endl;
		cin>>percent;
		price=price-(price/100)*percent;
	}
	cout<<"\nThe total price is :"<<price<<endl;

}
