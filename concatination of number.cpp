#include<iostream>
#include<iomanip>
using namespace std;
int main()
{    int b=2;
     char num;
     int concatinate=0;
     for(int i=1;i>0;i++)
     {
     	cout<<"Enter a single digit number : ";
     	cin>>num;
     	if(num=='q')
     	break;
     	else
     	{
     	if(i==1)
     	concatinate=num-48;
     	else
     	concatinate=concatinate*10+(num-48);
     }
	}
	cout<<"Concatinated number is "<<concatinate;
}
