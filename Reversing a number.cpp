#include<iostream>   //M.Bilal Tahir,24i-3166,SE-B,Ques 2
using namespace std;
int main()
{
	
	cout<<"                                 Output of question 2\n\n\n";
	int a,b,c,d,e,first,second,third,fourth,fifth; 
	/*first,second,third,fourth,fifth variables will store the respective number 
	of the input number for eg first will store first number of the input number and so on*/
	
	cout<<"Enter a five digit number   ";
	cin>>a;                 // takes number from user and stores in variable a
	first=a/10000;          //finds out the first number of the input number 
	b=a%10000;              //removes first number of input number and stores the remainder in b
	second=b/1000;          //finds out the second number of the input number
	c=b%1000;               //removes second number of input number and stores the remainder in c
	third=c/100;            //finds out the third number of the input number
	d=c%100;                //removes third number of input number and stores the remaining number in d
	fourth=d/10;            //finds out the fourth number of the input number
	e=d%10;                 //removes fourth number of input number and store the last number in e
	fifth=e;                //as e is the last number it is stored in variable fifth
	cout<<"The numbers in reverse are  "<<fifth<<fourth<<third<<second<<first;
	return 0;
	
	
}
