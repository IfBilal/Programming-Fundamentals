#include<iostream>
using namespace std;
int main()
{
	int num,num1,reversed=0,remainder;
	cout<<"Enter a number : ";
	cin>>num;
	num1=num;
	for( num;num!=0;num=num/10 )
	{
		remainder=num%10;
		reversed=reversed*10+remainder;
	}
	if(num1==reversed)
	cout<<"\nThe number is palindrome";
     else
     cout<<"\nNumber is not a palindrome";

}
