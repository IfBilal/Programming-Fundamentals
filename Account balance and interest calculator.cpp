#include<iostream>
using namespace std;
int main()
{    cout<<"Output of task 1"<<endl;
	double interest,balance,balance1,deposit1=0,deposit,withdrawn1=0,withdrawn,finalinterest=0;
	int months,i;
	cout<<"\nEnter annual interest rate : ";
	cin>>interest;
	cout<<"\nEnter Starting balance :";
	cin>>balance;
	cout<<"\nEnter no of months :";
	cin>>months;
	balance1=balance;  //balance1 is used to multiply the monthly interst rate with it and add in the total balance
	interest=interest/12; //calculate monthly balance
	
	for(i=1;i<=months;i++)
	{
		cout<<"\nEnter amount deposited in month "<<i<<" : ";
		cin>>deposit;
		for(;deposit<0;)
		{
			cout<<"Invalid entry \nEnter amount deposited in month "<<i<<" : ";
			cin>>deposit;
		}
		balance=balance+deposit;
		deposit1=deposit1+deposit;
		cout<<"\nEnter amount withdrawn in month "<<i<<" : ";
		cin>>withdrawn;
		withdrawn1=withdrawn1+withdrawn;
		for(;withdrawn<0;)
		{
			cout<<"Invalid entry \nEnter amount withdrawn in month "<<i<<" : ";
			cin>>withdrawn;
		}
		balance=balance-withdrawn;
		balance1=balance*(interest/100); 
		balance=balance+balance1;
		for(;balance<0;)
		{
			cout<<"\nAccount has been closed ";
			goto end;
		}
			cout<<"\nThe Total interest earned is : "<<balance1;
		cout<<"\nThe balance of month "<<i<<" is : "<<balance;
		finalinterest=finalinterest+balance1;
		} 
		cout<<"\n\n\nThe total interest earned is : "<<finalinterest;
		cout<<"\nThe total amount deposited is : "<<deposit1<<"\nThe total amount withdrawn is : "<<withdrawn1;
		cout<<"\nThe total balance is : "<<balance;
		end:
		cout<<" ";
} 
