                                  /*
                                  M.Bilal Tahir
                                  24i-3166
                                  Assignment 2
                                  SE-B
                                  Question 2
                                  */
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{    long double ans;   //stores answer from user
     long long int  rangeset;    //used to store max value given by user to use it further in the program
	long double range1,range2;  //store random numbers
	char negval;   //asks from user whether negative vallues are allowed or not
	char op;   // inputs operator from user
	long long int maxval;   //inputs maximum value from user
	cout<<"Select an operator for which exercise should be madefrom the following :\nAddition +\nSubtraction -\nMultiplication *\nDivision /\n";
	cin>>op;
	while(!(op=='+' || op=='-' || op=='*' || op=='/'))      //Validating the user to enter the correct operator
	{
		cout<<"Invalid Operator"<<endl;
	cout<<"Select an operator for which exercise should be madefrom the following :\nAddition +\nSubtraction -\nMultiplication *\nDivision /\n";
	cin>>op;
     }
     cout<<"\nEnter Maximumum value for input values of exercise : ";
     cin>>maxval;
     cout<<"\nEnter Y if Negative values are allowed or press N if not allowed : ";
     cin>>negval;
     while(!(negval=='Y' || negval=='N'))    //validating user to enter correct character for negative value
     {
     	cout<<"Invalid "<<endl;
     	cout<<"\nEnter Y if Negative values are allowed or press N is not allowed : ";
     	cin>>negval;
     	
	}
     srand(time(0));
     if(negval=='N')      //Generating random numbers is positive vallues only
     { 
     	maxval=maxval+1;
     	range1=rand()%maxval;
     	range2=rand()%maxval;
	}
	if(negval=='Y')    //generating  random numbers if both positive and negative values are included
	{    rangeset=maxval;
		maxval=maxval+maxval+1;
		range1=rand()%maxval-rangeset;
		range2=rand()%maxval-rangeset;
	}
	if(op=='+')     //exercise for addition
	{
		cout<<"Your exercise is : "<<range1<<" + "<<range2<<" = ";
		cin>>ans;
		if(ans==(range1+range2))
		cout<<"\nCongratulations! Correct answer!";
		else
		cout<<"\nSorry! Wrong Answer ";
	}
     else if(op=='*')  //exercise for multiplication
     {
     	cout<<"Your exercise is : "<<range1<<" * "<<range2<<" = ";
		cin>>ans;
		if(ans==(range1*range2))
		cout<<"\nCongratulations! Correct answer!";
		else
		cout<<"\nSorry! Wrong Answer ";
	}
	else if(op=='/')  //exercise for division
	{
		cout<<"Your exercise is : "<<range1<<" / "<<range2<<" = ";
		cin>>ans;
		if(ans==(range1/range2))
		cout<<"\nCongratulations! Correct answer!";
		else
		cout<<"\nSorry! Wrong Answer ";
	}
	rangeset=rangeset+1;
	if(op=='-' && negval=='N')  //exercise for subtraction for only positive values
	{
	     while(range2>range1)  //validating that the second number must be less than first number
		{
     	range1=rand()%rangeset;
     	range2=rand()%rangeset;
		}
		cout<<"Your exercise is : "<<range1<<" - "<<range2<<" = ";
		cin>>ans;
		if(ans==(range1-range2))
		cout<<"\nCongratulations! Correct answer!";
		else
		cout<<"\nSorry! Wrong Answer ";
	}
	else if(op=='-' && negval=='Y')  //exercise for subtraction with both negative and positive values
	{
		cout<<"Your exercise is : "<<range1<<" - "<<range2<<" = ";
		cin>>ans;
		if(ans==(range1-range2))
		cout<<"\nCongratulations! Correct answer!";
		else
		cout<<"\nSorry! Wrong Answer ";
	}
}

