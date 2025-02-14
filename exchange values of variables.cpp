#include<iostream>
using namespace std;
int main()
{
//	int a=10,b=20,c;
//	c=a;
//	a=b;
//	b=c;                                                     //exchanging values in variable
//	cout<<a<<endl<<b;
	int a=10,b=20;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<endl<<b;
	return 0;
}
