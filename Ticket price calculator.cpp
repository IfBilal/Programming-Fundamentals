#include<iostream>
using namespace std;
int main(){
	cout<<"Output of task 1 "<<endl;
int age,ticket;
double price=0;
cout<<"Enter no of tickets u want to boy : ";
cin>>ticket;
while(ticket<0)
{
cout<<"Invalid \nEnter the number of tickets you want to buy : ";
cin>>ticket;
} 
for(int counter=1;counter<=ticket;counter++)
{
cout<<"\nEnter age of person "<<counter<<" : ";
cin>>age;
while(age<-1)
{
cout<<"Invalid \nEnter age of person "<<counter<<" : ";
cin>>age;
}
if(age==-1)
{
for(counter;counter<=ticket;counter++)
{
price=price+15;
if(counter==ticket)
goto end;
}
}
if(age>=0 && age<12)
price=price+5;
if(age>=12 && age<<18)
price=price+10;
if(age>=18)
price=price+15;
}
end:
if(ticket>5)
{cout<<"\nThe price before discount is : $"<<price;
price=price-price*0.10;
cout<<"\nThe price after discount is : $"<<price;
}
else
cout<<"\nThe total price is : "<<price;}
