#include<iostream>
using namespace std;
int fib(int a)
{int x=0,y=1;    
if(a==1)
     cout<<x <<" ";
     if(a>=2)
	
	cout<<x<<" "<<y<<" ";
	for(int i=0;i<a-2;i++){   //loop will run to a-2 because 2 elemnts of the series are already printed ;
	int z=x+y;
	cout<<z<<" ";
	x=y;
	y=z;
	}
}
int main()
{    int num;
	cout<<"Enter number till u want to print your Fibonacci series : ";
	cin>>num;
	if(num>0)
	fib(num);
}
