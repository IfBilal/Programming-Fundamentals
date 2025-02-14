#include<iostream>
using namespace std;
int main()
{cout<<"Output of task 3 \n";
	char package;
	double amount;
	int a;
	starts:
	cout<<"\nEnter the Package you want A or B or C: ";
	cin>>package;
	int minutes;
	
	cout<<"\nEnter the amount of minutes used : ";
	cin>>minutes;
	
	switch(package)
	{     case 'A':
	    if(minutes<=460 )
	amount = 49.99;
		else if ( minutes>460){
		a=minutes-460;
		amount= 49.99+a*0.45;}
	break;
	case 'B':
			    if(minutes<=980)
	amount = 59.45;
		else if ( minutes>980){
		a=minutes-980;
		amount= 59.45+a*0.40;}
		break;
		case 'C':
			amount=67.98;
			break;
			default:
				cout<<"invalid input ";
				goto starts;
}
	cout<<"\nThe Total amount due is : $"<<amount;
	}
