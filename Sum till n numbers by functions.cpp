#include<iostream>
using namespace std;
int Nsum(int a,int b){
	int SUM=0;
	for(int a=1;a<=b;a++)
	{
	SUM=SUM+a;
	}
	return SUM;
}
int main()
{
	int x;
	cout<<"Enter end of numbers : ";
	cin>>x;
	int sum=Nsum(1,x);
	cout<<"\nThe sum is : "<<sum;
}



