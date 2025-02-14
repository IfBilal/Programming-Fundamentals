#include<iostream>
using namespace std;
bool isprime(int num)
{
	bool prime=1;
	for (int i=2;i<num;i++)
	{
		if(num%i==0)
		prime=0;
	}
	return prime;
}
int main(){
	
	int num;
	bool a;
	cout<<"Enter a number : ";
	cin>>num;
	a=isprime(num);
	if(a==0)
	cout<<"\nNot a prime number ";
	if(a==1)
	cout<<"\nPrime number ";
}
