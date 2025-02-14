#include<iostream>
using namespace std;
int main()
{
int unit;
int a,b,c,d,e,f;
cout<<"Enter no of units used";
cin>>unit;
if(unit<=100 && unit>0)
cout<<"bill is : "<<unit*0.5;
if(unit>100 && unit<=200)
{
	a=unit%100;
b=unit-a;
cout<<"bill is : "<<(b*0.5)+(a*0.75);
}
if(unit>200)
{
	e=unit-200;
	cout<<"bill is : "<<(100*0.5)+(100*0.75)+(e*1);
}}
