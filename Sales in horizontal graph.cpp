#include<iostream>
using namespace std;
int main()
{cout<<"1 X = 50$"<<endl; 
	int sale1,sale2,sale3,sale4,sale5,asterick1,asterick2,asterick3,asterick4,asterick5;
	cout<<"Enter sales for store 1 : $";
	cin>>sale1;
	while(sale1<0)
	{
		cout<<"Invalid input \nEnter sales for store 1 :";
		cin>>sale1;
	}
	cout<<"\nEnter sales for store 2 : $";
	cin>>sale2;
	while(sale2<0)
	{
		cout<<"Invalid input \nEnter sales for store 2 : ";
		cin>>sale2;
	}
	cout<<"\nEnter sales for store 3 : $";
	cin>>sale3;
	while(sale3<0)
	{
		cout<<"Invalid input \nEnter sales for store 3 : ";
		cin>>sale3;
	}
	cout<<"\nEnter sales for store 4 : $";
	cin>>sale4;
	while(sale4<0)
	{
		cout<<"Invalid input \nEnter sales for store 4 : ";
		cin>>sale4;
	}
	cout<<"\nEnter sales for store 5 : $";
	cin>>sale5;
	while(sale5<0)
	{
		cout<<"Invalid input \nEnter sales for store 5 : ";
		cin>>sale5;
	}
	asterick1=sale1/50;
	asterick2=sale2/50;
	asterick3=sale3/50;
	asterick4=sale4/50;
	asterick5=sale5/50;
	cout<<"\nStore 1 : ";
	for(int counter1=1;counter1<=asterick1;counter1++)
	cout<<"X";
	cout<<"\nStore 2 : ";
	for(int counter2=1;counter2<=asterick2;counter2++)
	cout<<"X";
	cout<<"\nStore 3 : ";
	for(int counter3=1;counter3<=asterick3;counter3++)
	cout<<"X";
	cout<<"\nStore 4 : ";
	for(int counter4=1;counter4<=asterick4;counter4++)
	cout<<"X";
	cout<<"\nStore 5 : ";
	for(int counter5=1;counter5<=asterick5;counter5++)
	cout<<"X";
}
