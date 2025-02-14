                                              /*
                                             M.Bilal Tahir
                                             24i-3166
                                             Assignment 2
                                             SE-B
                                             Question 6
                                             */
#include<iostream>
using namespace std;
int main()
{
	double years,rating,salary,hours;
	double bonus=0,bonus1=0,bonus2=0,bonus4=0,bonus5=0,bonus6=0;  // these are used to calculate bonuses of each component separately
	double bonus3=0;
	char department,location;
	cout<<"Enter employee's years of service : ";
	cin>>years;
	while(years<0) //validating user
	{
		cout<<"\nInvalid\nEnter employee's years of service : ";
		cin>>years;
	}
	cout<<"\nEnter Performance rating of employee (1 to 5) : ";
	cin>>rating;
	while(rating<1 || rating>5) //validating user
	{
		cout<<"\nInvalid \n";
		cout<<"Enter Performance rating of employee (1 to 5) : ";
		cin>>rating;
	}
	cout<<"\nEnter employee's annual salary : $";
	cin>>salary;
	while(salary<0) //validating user
	{
		cout<<"\nInvalid\nEnter employee's annual salary : $";
		cin>>salary;
	}
	cout<<"\nEnter employee's no of overtime hours : ";
	cin>>hours;
	while(hours<0) //validating user
	{
		cout<<"\nInvalid\nEnter employee's no of overtime hours : ";
		cin>>hours;
	}
	cout<<"\nEnter your department ( E for engineering, S for sales or O for others ) : ";
	cin>>department;
	while(department!='E' && department!='S' && department!='O') //validating user
	{
		cout<<"\nInvalid\nEnter your department ( E for engineering, S for sales or O for others ) : ";
		cin>>department;
	}
	cout<<"Enter region of your work location (A or B and if neither enter O for other ) : ";
	cin>>location;
	while(location!='A' && location!='B' && location!='O') //validating user
	{
		cout<<"\nInvalid\nEnter your work location ( A or B if neither enter O for others ) : ";
		cin>>location;
	}
	
	if(years<3) 
	{
		cout<<"\nNo bonus as experience is less than 3 "<<endl;
		goto ending; 
	}                       //if experience or rating are less than 3 the person is not valid for bonus so using goto end the program
	if(rating<3)
	{
		cout<<"\nNo bonus as rating is less than 3"<<endl;
		goto ending;
	}
	if(years>=3 && years<=5)
	{
		if(rating==5)
		{
		bonus=bonus+(salary/100)*10;
		cout<<"\nEmployee has rating of 5 with experience of "<<years<<" years so he/she will get 10 percent bonus on the annual salary "<<endl;
		}
	     if(rating==4){
	     bonus=bonus+(salary/100)*7;
		cout<<"\nEmployee has rating of 4 with experience of "<<years<<" years so he/she will get 7 percent bonus on the annual salary "<<endl;
		}
	     if(rating==3){
	     bonus=bonus+(salary/100)*5;
		cout<<"\nEmployee has rating of 3 with experience of "<<years<<" years so he/she will get 5 percent bonus on the annual salary "<<endl;
		}
	}
	if(years>5 && years<=10)
	{
		if(rating==5){
		bonus=bonus+(salary/100)*15;
		cout<<"\nEmployee has rating of 5 with experience of "<<years<<" years so he/she will get 15 percent bonus on the annual salary "<<endl;
		}
		if(rating==4){
		bonus=bonus+(salary/100)*10;
		cout<<"Employee has rating of 4 with experience of "<<years<<" years so he/she will get 10 percent bonus on the annual salary "<<endl;}
		if(rating==3){
		bonus=bonus+(salary/100)*8;
		cout<<"Employee has rating of 3 with experience of "<<years<<" years so he/she will get 8 percent bonus on the annual salary "<<endl;
		}
	}
	if(years>10)
	{
		if(rating==5)
		{
		bonus=bonus+(salary/100)*20;
		cout<<"\nEmployee has rating of 5 with experience of "<<years<<" years so he/she will get 20 percent bonus on the annual salary "<<endl;
		}
		if(rating==4){
		bonus=bonus+(salary/100)*15;
		cout<<"\nEmployee has rating of 4 with experience of "<<years<<" years so he/she will get 15 percent bonus on the annual salary "<<endl;
		}
		if(rating==3){
		bonus=bonus+(salary/100)*12;
		cout<<"\nEmployee has rating of 3 with experience of "<<years<<" years so he/she will get 12 percent bonus on the annual salary "<<endl;
		}
	}
	if(hours>100 && hours<=200)
{
	{bonus1=bonus1+(salary/100)*2;
	cout<<"\nEmployee has overtime of "<<hours<<" hours so he/she will get 2 percent bonus on the annual salary "<<endl;
     }
	if(rating==5)
	{ bonus3=bonus1;
	bonus1=bonus1+(bonus3/100)*1;
	cout<<"\nEmployee also has rating of 5 with overtime of "<<hours<<" hours so he/she will get extra 1 percent bonus on the overtime bonus "<<endl;
     }
}
	if(hours>200)
{
	{bonus1=bonus1+(salary/100)*4;
	cout<<"\nEmployee has overtime of "<<hours<<" hours so he/she will get 4 percent bonus on the annual salary "<<endl;
	}
	if(rating==5)
	{ bonus3=bonus1;
	bonus1=bonus1+(bonus3/100)*1;
     	cout<<"\nEmployee also has rating of 5 with overtime of "<<hours<<" hours so he/she will get extra 1 percent bonus on the overtime bonus "<<endl;
	}
}    switch(department)
 {
     case 'E':
     bonus4=bonus4+(salary/100)*5;
     cout<<"\nEmployee is from Engineering department so he/she will get a 5 percent bonus on annual salary "<<endl;
     break;
     case 'S':
     bonus4=bonus4+(salary/100)*3;
      cout<<"\nEmployee is from Sales department so he/she will get a 3 percent bonus on annual salary "<<endl;
     break;
	case 'O':
     cout<<"\nNo department based bonus ";
     break;
}    switch(location)
	{
	case 'A':
     bonus5=bonus5+(salary/100)*5;
      cout<<"\nEmployee is from A region so he/she will get a 5 percent bonus on annual salary "<<endl;
     break;
	case 'B':
     bonus5=bonus5+(salary/100)*3;
      cout<<"\nEmployee is from region B so he/she will get a 3 percent bonus on annual salary "<<endl;
     break;
	case 'O':
     cout<<"\nNo location allowance based bonus ";
     break;}
	bonus2=bonus +bonus1+bonus4+bonus5;
     if(salary>100000){
     bonus6=(bonus2/100)*5;
	 cout<<"\nEmployee's salary exceeds $100000 so he/she will get a 5 percent high salary bonus on annual salary "<<endl;
	}
     cout<<"\nThe base bonus is : $"<<bonus<<endl;
     cout<<"The overtime bonus is : $"<<bonus1<<endl;
     cout<<"The department based bonus : $"<<bonus4<<endl;
     cout<<"The location allowance bonus is : $"<<bonus5<<endl;
     cout<<"The High salary bonus is : $"<<bonus6<<endl;
     cout<<"The final bonus is : $"<<bonus+bonus1+bonus4+bonus5+bonus6<<endl;
     cout<<"The salary with bonus is : $"<<bonus+bonus1+bonus4+bonus5+bonus6+salary;
     
	ending:
	cout<<" ";
}
