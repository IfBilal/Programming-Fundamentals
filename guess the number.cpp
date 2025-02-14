#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{cout<<"Output of task 6"<<endl;
int num,guess;
srand(time(0));
num=rand();
     do
     {
     	cout<<"Enter Your guess : ";
     	cin>>guess;
	     if(num>guess)
	     cout<<"Too low, try again"<<endl;
	     else if(guess>num)
	     cout<<"Too high, try again"<<endl;
	     
	}while(guess!=num);
	cout<<"Correct guess!";
}
