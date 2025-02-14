#include<iostream>
using namespace std;
int main()
{    /*in this code the main logic is that we take a number from user and decrement that number by one because we dont want to check whether that number is prime
or not we want to find the previous prime number, we will check the previous number whether it is prime or not by dividing it with all the numbers between 2 and 
and the number before the given  number if it is divisible by any number this means its not prime and we will then decrement the number again  by one and then check 
whether the new number is prime or not by the same logic whenever a number doesnt divides with any number that means it is prime then the compiler will break from 
the loop and print that number*/ 
	int a,b,c=2;
	bool isprime=true;
	cout<<"Enter a number : ";
	cin>>a;
	if(a==3) 
	cout<<"Prime number before given no is : 2";
	    
while(a>2) //this condition will check whether  number is prime or not from 2 to the given number
{	
c=2; //during checking of prime number value of c changes so we assign c=2 again before every iteration so to check whether the new number is prime or not
a--; // it will decrement the number after every iteration, when a number is checked and found out it is not prime this will decrement the number to check the previous number until the while condition remains true
b=a-1; //during checking of prime number value of b changes so we assign b a value before every iteration according to the number checked i.e. a, in that iteration

	while(c<=a-1) //this condition is used to check a number is prime or not ,c increases from 2 to the number previous than the given number
	{
		if(a%b==0) //checking whether the number is divisible by the numbers before it one by one
		{
		isprime=true; //if it divisible by any number isprime will become true and exit from loop because we now know that the number is not prime so there is no purpose to further check it
		break;
	     }
	     else //if a is not divisble by b isprime becomes false and next iteration starts
	     isprime=false;
	     c++; //increases c after every iteration of inner loop,for the condition in inner loop to run for required no of times
		b--; //decreases the number which is divided by given number to check whether it is divisible or not, after every iteration of inner loop
	}
	if(isprime==0)
	{
	cout<<"prime no before given no is "<<a;
	break;}
}
}
