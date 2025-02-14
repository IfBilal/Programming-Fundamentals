#include<iostream>
using namespace std;
int main()
{
//this program finds all the prime palindromic numbers from 1 to 1000  
bool isprime=true;
int temp,reverse,remainder;
int i,a;
	for( int i=100;i<1000;i++)
{      isprime=true;
		for(int a=2;a<=i-1;a++)
		{
		if(i%a==0)
	{
			isprime=false;
			break;
	}
          }
          temp=i;
          int temp2=i;
          reverse=0;
		if(isprime==true)
		{ 
		for(i;temp!=0;temp=temp/10){
			remainder=temp%10;
			reverse=reverse*10+remainder;
	      }
	      if(temp2==reverse)
	      cout<<reverse<<"  ";
		}
}
}
