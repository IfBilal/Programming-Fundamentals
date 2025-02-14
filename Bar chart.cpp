                                                                     /*
                                             M.Bilal Tahir
                                             24i-3166
                                             Assignment 2
                                             SE-B
                                             Question 5
                                             */
#include<iostream>
using namespace  std;
int main()
{
	int n1,n2,n3,n4,n5,lines;
	cout<<"Enter first number : ";
	cin>>n1;
	while(n1<0)      //validating user for not entering negative numbers
	{
		cout<<"Invalid entry \nEnter first number : ";
		cin>>n1;
	}
	cout<<"\nEnter second number : ";
	cin>>n2;
	while(n2<0)   //validating user for not entering negative numbers
	{
		cout<<"Invalid entry \nEnter second number : ";
		cin>>n2;
	}
	cout<<"\nEnter third number : ";
	cin>>n3;
	while(n3<0)  //validating user for not entering negative numbers
	{
		cout<<"Invalid entry \nEnter third number : ";
		cin>>n3;
	}
	cout<<"\nEnter fourth number : ";
	cin>>n4;
	while(n4<0)  //validating user for not entering negative numbers
	{
		cout<<"Invalid entry \nEnter fourth number : ";
		cin>>n4;
	}
	cout<<"\nEnter fifth number : "; 
	cin>>n5;
	while(n5<0)  //validating user for not entering negative numbers
	{
		cout<<"Invalid entry \nEnter fifth number : ";
		cin>>n5;
	} 
	
	//As the loop tells the number of lines to be printed but the number of lines are not known before as it depends on user 's input so first we find the highest
	//input value from user and work the loop for that no of times
	if(n1>n2 && n1>n3 && n1 > n4 && n1>n5)
	lines=n1;
	else if(n2>n1 && n2>n3 && n2 > n4 && n2>n5)
	lines=n2;
	else if ( n3>n1 && n3>n2 && n3 > n4 && n3>n5)
	lines=n3;
	else if(n4>n1 && n4>n2 && n4 > n3 && n4>n5)
	lines=n4;
	else if (n5>n1 && n5>n2 && n5 > n3 && n5>n4) 
	lines=n5;
	for(int counter=1;counter<=lines;lines--)
	{   if(lines>=10)   //print the no of row before each row
	    cout<<lines<<" ";           
		else if(lines>=0 && lines <10)
	     cout<<"0"<<lines<<" ";
	     
		//Now the printing of entries with astericks
	     
		if(n1>=lines)   //if the condition is true it will print a asterick otherwise leave the space nil
		cout<<" *";
		else
		cout<<"  ";
		if(n2>=lines)
		cout<<" *";
		else
		cout<<"  ";
		if(n3>=lines)
		cout<<" *";
		else
		cout<<"  ";
		if(n4>=lines)
		cout<<" *";
		else
		cout<<"  ";
		if(n5>=lines)
		cout<<" *";
		else
		cout<<"  ";
		cout<<"\n";
	} 
	cout<<"    1 2 3 4 5";  //print the no of column 
}
