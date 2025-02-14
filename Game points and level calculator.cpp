#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{ int counter=1;
cout<<"Output of task 2 \n\nEnter -1 to stop entering \n\n"<<endl;
	int score;
	int bonus;
	int points=0;
	while(score!=-1)
	{
		cout<<"\nEnter you score in battle "<<counter<<" : ";
		cin>>score;
		while(score<-1)
		{
			cout<<"\nInvalid \nEnter you score in battle "<<counter<<" : ";
		cin>>score;
		}
		points=points+score;
		counter++;
	}
	srand(time(0));
	bonus=rand()%51;
	points=points+bonus;
	cout<<"\nYour bonus points are : "<<bonus;
	cout<<"\nYour total points are : "<<points;
	
	if(points<100)
	cout<<"\nLevel 1 ";
	if(points>=100 && points<=199)
	cout<<"\nLevel 2 ";
	if(points>=200 && points<=299)
	cout<<"\nLevel 3 ";
	if(points>=300)
	cout<<"\nLevel 4 ";
	
}
