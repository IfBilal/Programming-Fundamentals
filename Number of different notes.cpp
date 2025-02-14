#include<iostream>       //M.Bilal Tahir,24i-3166,SE-B,Ques 3
using namespace std;
int main()
{
	cout<<"                                Output of question 3\n\n\n";
	int a,b,c,hundred,fifty,ten;
	/*the variables hundred,fifty and ten are used to store the number of notes respectively
	for eg hundred stores no of hundred notes and so on */
	cout<<"Enter the amount of money  ";
	cin>>a;              // will take the number from user
	hundred=a/100;      //will find out the number of hundred notes 
	b=a%100;            //Removes the money of hundred notes and stores the remaining money in b
	fifty=b/50;         //finds out number of fifty notes 
	c=b%50;            //removes the money of 50 notes and stores the remaining money in c
	ten=c/10;          // finds out number of 10 notes 
	cout<<hundred<<" Hundred rupees note  "<<endl<<fifty<<"  Fifty rupees note  "<<endl<<ten<<"  ten rupee note  ";
	return 0;
	
}
