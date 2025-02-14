#include<iostream>
using namespace std;
int main()
{ 
int sum=0,i,j;
for(int i=1;i<=500;i++)
{sum=0;
for(j=1;j<=(i-1);j++)
{
	if(i%j==0)
	{
	sum=sum+j;
	}
}
if(sum==i)
cout<<sum<<" is a perfect number"<<endl;
}}
