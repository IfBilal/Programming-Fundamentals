#include<iostream>
#include<string>
using namespace std;
int main()
{cout<<"Output of task 2 \n";
	string accType;
	float finalBalance;
	cout<<"Enter your account type : ";
	cin>>accType;
	float balance;
	cout<<"\nEnter your account balance : ";
	cin>>balance;
     if( balance<200)
     {
     	if(accType=="Savings" || accType=="Saving" || accType=="savings" || accType=="saving")
     	{finalBalance=balance-15;}
     	else if(accType=="checking" || accType=="Checking")
     	{finalBalance=balance-30;}
	}
	else if( balance>=200)
	{
		if(accType=="Savings" || accType=="Saving" || accType=="savings" || accType=="saving")
		finalBalance=balance+(balance/100)*5;
		else if((accType=="checking" || accType=="Checking") && balance>=4200)
		finalBalance=balance+(balance/100)*2;
		else if((accType=="checking" || accType=="Checking") && balance<4200)
		finalBalance=balance+(balance/100)*6;
	}
	cout<<"\nUpdated Balance is : $"<<finalBalance;
	
}
