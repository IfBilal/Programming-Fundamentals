#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{    int candy=0;
	int minutes,energy=100;
	char characters;
	int perm;
	int chara;
	srand(time(0));
	minutes=rand()%4+4;
	cout<<"The cat will hunt for "<<minutes<<" minutes ";
	
	for(int counter=1;counter<=minutes;counter++) 
{    
     chara=rand()%3+1;
	switch(chara)
     {
     start:
     case 1:
	cout<<"\nMinute"<<counter<< ":You are facing chococat. Do you want to face the challenge  1 for yes and 2 for no : ";
	cin>>perm;
	if(perm==1)
	{
	cout<<"\nYou encounter chococat and took the challenge. You lost 20 energy  ";
	energy=energy-20;
	
	if(energy<0)
	{
		cout<<"\nOut of energy ";
		goto end;
	}
	else
	candy+=1;
	}
	else if(perm==2)
	{
		cout<<"\nYou encounter chococat but didn't took the challenge.  ";
	}
	else 
	{
	cout<<"\nInvalid input \n";	
	goto start;}
	break;
	case 2:
	cout<<"\nMinute"<<counter<< " : You are facing My Melody. Do you want to face the challenge  1 for yes and 2 for no : ";
	cin>>perm;
	if(perm==1)
	{
	cout<<"\nYou encounter My Melody and took the challenge. You lost 15 energy  ";
	energy=energy-15;
	if(energy<0)
	{
		cout<<"\nOut of energy ";
		goto end;
	}
	else
	candy+=1;
	}
	else if(perm==2)
	{
		cout<<"\nYou encounter My Melody but didn't took the challenge.  ";
	}
	else 
	{
	cout<<"\nInvalid input \n ";
	goto start;
	}
	break;
	case 3:
	cout<<"\nMinute"<<counter<< " : You are facing Kuromi. Do you want to face the challenge  1 for yes and 2 for no : ";
	cin>>perm;
	if(perm==1)
	{
	cout<<"\nYou encounter Kuromi and took the challenge. You lost 10 energy  ";
	energy=energy-10;
	if(energy<0)
	{
		cout<<"\nOut of energy ";
		goto end;
	}
	else
	candy+=1;
	}
	else if(perm==2)
	{
		cout<<"\nYou encounter Kuromi but didn't took the challenge.  ";
	}
	else 
	{
	cout<<"\nInvalid input \n";
	goto start;
	}
	break;
	}
}
	cout<<"\n energy left is "<<energy;
end:	
cout<<"\nCandy collected : "<<candy;

}
