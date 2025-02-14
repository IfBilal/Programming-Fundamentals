#include<iostream>
using namespace std;
 int main()
 {cout<<"Output of task 4 \n";
 	int vol;
	 float a,b,c,d;
 	float price;
 	cout<<"Enter the volume of water : ";
 	cin>>vol;
 	int age;
 	cout<<"Enter your age : ";
 	cin>>age;
 	if(vol<=30)
 	price=vol*0.5;
	else if(vol<=80 && vol>30)
	{
		a=vol-30;
		price=(30*0.5)+a*0.75;
	}
	else if(vol>80) 
     {
     	c=vol-80;
     	price=(30*0.5)+(50*0.75)+c*1;
	}
	if(age>65)
	price=price-(price/100)*10;
	if(vol>150)
	price=price+(price/100)*15;
	cout<<"\nThe price is : $"<<price;
 }
