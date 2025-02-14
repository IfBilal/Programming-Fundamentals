#include<iostream>
using namespace std;
int main()
{
int a,i,b;
cout<<"Enter a number \n";
cin>>a;
cout<<"\nEnter no till u want the table"<<endl;
cin>>b;
for(i=1;i<=b;i++)
{
cout<<a<<"*"<<i<<"="<<a*i<<endl;
}
}
