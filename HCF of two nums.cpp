#include<iostream>
using namespace std;
int main(){

cout<<"Output of task 2"<<endl;   
 int num1,num2,a=1,c,d;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"\nEnter second number : ";
	cin>>num2;
	
	if(num2>num1)
	num1=num1;
	else if(num1>num2)
	{
	num1=num1+num2;
	num2= num1-num2;
	num1=num1-num2;
	}
	c=num1;
	do
	{
		if(num1%c==0 && num2%c==0)
		{
				cout<<"HCF is "<<c;
				break;
		}
		c--;
		
	}while(c!=0);
	
	
}

