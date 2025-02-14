#include<iostream>
using namespace std;
int main()
{ 
double price=50;
	char plan;
	cout<<"Output of task 1 \n";
	cout<<"Enter 'Y' if you are signing up for a yearly plan or 'M' for monthly : "; 
	cin>>plan;
	int student;
	cout<<"Are you a student ( 1 for yes and 0 for no ) ";
	cin>>student;
	int age;
	cout<<"\nEnter your age : ";
	cin>>age;

		switch(student)
	{
		case 1:
	     price=price*0.8;
	     break;
		default:
		price=price*1;
		break;}
	      switch(plan)
     {
     	case 'Y': 	
     		price=price*12;
     		price=price*0.85;
         		break;
         		default:
         		price=price*1;
         		break;
	}
     if (age>=65)
     {
     	price=price*0.9;
	}

    cout<<"\nThe Final membership price is : $"<<price;
     
}
