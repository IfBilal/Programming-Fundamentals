#include<iostream>
using namespace std;
int lift_operating_system(int requested_floor, int current_floor, char lift_status);
int liftup(int current_floor,int requested_floor );
int liftdown(int current_floor,int requested_floor );
char halt_lift(char status);
char un_halt_lift(char status);
void delay()
{
	for(int i=0;i<15000000;i++)
	{
		
	}
}
int main()
{
	cout<<"Lift Operating System\n---------------------\nCurrent floor: -1\n";
	int requested_floor,operation;
	int current_floor=-1;
	char lift_status='W';
	
     while(true)
     {	for(int i=0;i<70;i++)
     	delay();
     	system("CLS");
     	cout<<"\nLift Status : ("<<lift_status<<") ";
	cout<<"\nChoose an operation:\n1. Go to a floor\n2. Halt the lift\n3. Unhalt the lift\n4. Exit\n";
     cin>>operation;
     if(operation==1){
     requested_floor=0;
	current_floor=lift_operating_system(requested_floor,current_floor,lift_status);
     }
	if(operation==2)
     lift_status=halt_lift(lift_status);    
     if(operation==3)
     lift_status=un_halt_lift(lift_status);
     if(operation==4){
     cout<<"\nThanks for using the lift ";
	break;
     }
     else
     {
	requested_floor=-2;
     lift_operating_system(requested_floor,current_floor, lift_status);
     }
     }
}
int lift_operating_system(int requested_floor, int current_floor, char lift_status)
{
	if(requested_floor==-2)
	{
			return 0;
	}
	if(lift_status=='W'){
		cout<<"Enter the floor you want to go : (-1 to 4) : ";
		cin>>requested_floor;
		while(requested_floor<-1 || requested_floor>4)
		{
			cout<<"\nInvalid \n";
			cout<<"Enter the floor you want to go : (-1 to 4) : ";
		cin>>requested_floor;
			
		}
		if(requested_floor==current_floor)
		{
		cout<<"\nYou are already at the requested floor ";
		}
		if(requested_floor<current_floor)
		{
		current_floor=liftdown(current_floor,requested_floor );
		 }
		if(requested_floor>current_floor)
		{
		current_floor=liftup(current_floor,requested_floor );
	     }
	     return current_floor;
     }
     if(lift_status=='H')
     {
     	cout<<"lift is Halted can't move " ;
		return current_floor; 
	}
}
int liftup(int current_floor,int requested_floor )
{
	
	cout<<"\nMoving to floor "<<requested_floor<<"\nReached!";
	return requested_floor;
}
int liftdown(int current_floor,int requested_floor )
{
	if(requested_floor==-1)
	cout<<"Moving to basement \n";
	else
     cout<<"\nMoving to floor "<<requested_floor<<"\nReached!";
	return requested_floor;
}
char halt_lift(char status)
{
	if(status=='W')
	{
	cout<<"\nLift is Halted \n";
	return 'H';
	}if(status=='H')
	{
	cout<<"\nLift is already Halted \n";
	return 'H';
     }
}
char un_halt_lift(char status)
{
	if(status=='H')
	{
		cout<<"\nLift is unhalted \n";
	return 'W';
	
	}
	if(status=='W')
	{
	cout<<"\nLift is already unHalted \n";
	return 'W';
     }
}
