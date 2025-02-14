#include<iostream>
using namespace std;
int main()
{
	int remainder=0,a,b,temp;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	temp=b;
	while(true)
	{
		b=b+temp;
		if(b>a)
		{
			b=b-temp;
			remainder=a-b;
			break;
		}
	}
	cout<<"Modulus is : "<<remainder;
}

