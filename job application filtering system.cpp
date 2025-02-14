#include<iostream>
#include<string>
using namespace std;
int main()
{
	int exp;
	bool degree;
	int skill;
	cout<<"Enter 1 if u have a degree otherwise press 0"<<endl;
	cin>>degree;
	cout<<"Enter your experience"<<endl;
	cin>>exp;
	cout<<"\nPress 1 if u know both python and javascript\nPress 2 if u only know one of these\nPress 3 if u neither know python nor javascript "<<endl;
	cin>>skill;
	if(exp<3)
	{
		cout<<"You dont have enough experience "<<endl;
		goto hello;
	}
	else if(exp>3 && exp<=5 && skill==1 && degree==1)
	cout<<"Eligible for job"<<endl;
	else if(exp>5 && exp<=7 && degree==1 && (skill==2 || skill==1))
	cout<<"Eligible for job"<<endl;
	else if(exp>7 && exp<=10 && (degree==1||degree==0)&&(skill==1||skill==2))
	cout<<"Eligible for job";
	else if(exp>10)
	cout<<"Eligible for job"<<endl;
	else
	cout<<"Not eligible for job";
     hello:
     	return 0;
	
	
}
