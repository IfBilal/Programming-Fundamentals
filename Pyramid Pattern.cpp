                                                  /*
                                             M.Bilal Tahir
                                             24i-3166
                                             Assignment 2
                                             SE-B
                                             Question 3
                                             */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{    long long int lines,frontslash,backslash,counter,spaces;
	cout<<"Enter number of lines for the pattern : ";
	cin>>lines;
	while(lines<0)
	{
		cout<<"Invalid input \nEnter no of lines : ";
		cin>>lines;
	}
	long long int copy; //it is used to store no.of lines to be printed as the value of variable lines changes during program execution
	copy=lines;
	if(lines>0)
	cout<<setw(lines+1)<<"|"<<endl;  // prints the first straight line in middle
	for(counter=1;counter<=copy;counter++)  //loop for how many lines are printed
	{
	for(spaces=1;spaces<=(lines-1);spaces++) //It gives required spaces before every line
	cout<<" ";
	for(backslash=1;backslash<=counter;backslash++)  //prints backslashes
	cout<<"\\";
	cout<<"|";       //after all backslashes printed it prints the middle straight line
	for(frontslash=1;frontslash<=counter;frontslash++)  //print all front slashes
	cout<<"/";
	cout<<"\n"; // moves to next line
	lines--;
	  }
	
}
