//M.Bilal Tahir , SE-B,24i-3166


#include<iostream>
#include<conio.h>
using namespace std;
int processMainMenu()
{
	restart:
	int choice,operation;
	cout<<"=== Calculator Menu ===\n1. Basic Operations\n2. Advanced Operations\n3. Number Conversions\n4. Exit\nEnter Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			return 1;
			break;
		case 2: 
		 	return 2;
		 	break;
		case 3:
			return 3;
			break;
			case 4:
				return 4;
				break;
			default:
				cout<<"\nInvalid \n";
			goto restart;
			break;
			
			
	}
}
int Basic_Operation_Menu()
{
	int operation;
     cout<<"\n=== Basic Operations ===\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Back to Main Menu\nEnter choice : ";
     cin>>operation;
     while(operation<1 || operation>5)
     {
     	cout<<"\nInvalid\n=== Basic Operations ===\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Back to Main Menu\nEnter choice : ";
     cin>>operation;
	}
     return operation;
}
int Advanced_Operation_Menu()
{
	int operation;
	cout<<"\n=== Advanced Operations ===\n1. Power\n2. Square of a Number\n3. Average\n4. Back to Main Menu\nEnter choice : ";
	cin>>operation;
	while(operation<1 || operation >4)
	{
		cout<<"\nInvalid \n";
		cout<<"\n=== Advanced Operations ===\n1. Power\n2. Square of a Number\n3. Average\n4. Back to Main Menu\nEnter choice : ";
	cin>>operation;
	}
	return operation;
}
int Number_Conversion_Menu()
{
	int operation;
	cout<<"\n=== Number Conversions ===\n1. Decimal to Binary\n2. Binary to Decimal\n3. Temperature (C to F)\nEnter choice : ";
	cin>>operation;
	while(operation<1 || operation>3)
	{
	cout<<"\nInvalid\n=== Number Conversions ===\n1. Decimal to Binary\n2. Binary to Decimal\n3. Temperature (C to F)\nEnter choice : ";
	cin>>operation;	
	}
	return operation;
}
double add(double a, double b)
{
	return a+b;
}
double diff( double a, double b)
{
	return a-b;
}
double prod ( double a, double b)
{
	return a*b;
}
double division( double a, double b)
{
	return a/b;
}
double power ( double a,double b)
{   
if(b<0)
{
	cout<<"\nInvalid \n";
	cout<<"\nEnter power again \n";
	cin>>b;
}
     double result=1;
	for(int i=1;i<=b;i++)
	{
		result=result*a;
	}
	
	return result;
}
double square(int a)
{
	return a*a;
}
double average(double arr[],int b)
{	int sum=0;
	for(int i=0;i<b;i++)
			{    
				     cout<<"\nEnter number "<<i+1<<" : ";
				     cin>>arr[i];
					sum=sum+arr[i];
			}
			return sum/b;
	
}
long long int DecToBin(int num)
{    int binary=0;
int position=1;
	while(num>0)
	{
		binary = binary + (num%2)*position;
		position*=10;
		num=num/2;
	}
	return binary;
	
}
int BinToDec(int arr[],int length)
{    int decimal=0;
	for(int i=length-1,j=0;i>=0,j<length;i--,j++)
	{
		decimal=decimal+(arr[i]*power(2,j));
	}
	return decimal;
}
double tempChange(double temp)
{
	return (9.0/5.0)*temp+32;
}
int main()
	{    start:
		int choice=processMainMenu();
	if (choice==1)
		{     start2:
			int operation=Basic_Operation_Menu();
			if (operation==1)
			{
				double num1,num2;
				cout<<"\nEnter number 1 : ";
				cin>>num1;
				cout<<"\nEnter number 2 : ";
				cin>>num2;
				cout<<"\nThe sum is : "<<add(num1,num2);
				cout<<"\nPress any key to continue ";
				getch();
				goto start2;
				
				
			}
			if (operation==2)
			{    
				double num1,num2;
				cout<<"\nEnter number 1 : ";
				cin>>num1;
				cout<<"\nEnter number 2 : ";
				cin>>num2;
				cout<<"\nThe difference is : "<<diff(num1,num2);
				cout<<"\nPress any key to continue ";
				getch();
				goto start2;
			}
			if (operation==3)
			{    
				double num1,num2;
				cout<<"\nEnter number 1 : ";
				cin>>num1;
				cout<<"\nEnter number 2 : ";
				cin>>num2;
				cout<<"\nThe product is : "<<prod(num1,num2);
				cout<<"\nPress any key to continue ";
				getch();
				goto start2;
			}
			if (operation==4)
			{
				double num1,num2;
				cout<<"\nEnter number 1 : ";
				cin>>num1;
				cout<<"\nEnter number 2 : ";
				cin>>num2;
				while(num2==0)
				{
					cout<<"\nCant divide by zero \n";
					cout<<"\nEnter number 2 : ";
				     cin>>num2;		
				}
				cout<<"\nThe division is : "<<division(num1,num2);
				cout<<"\nPress any key to continue ";
				getch();
				goto start2;
			}
			if (operation==5)
			{
			goto start;	
			}
			else
			{
				cout<<"\nInvalid\n";
				goto start2;
			}
		}
	else if (choice==2)
		{   start3:
			int operation=Advanced_Operation_Menu();
			if (operation==1)
			{
				double num,power1;
				cout<<"\nEnter the number : ";
				cin>>num;
				cout<<"\nEnter it's power : ";
				cin>>power1;
				cout<<"\nThe result is : "<<power(num,power1);
			     cout<<"\nPress any key to continue ";
				getch();
				goto start3;
			}
			if (operation==2)
			{
				double num;
				cout<<"\nEnter the number : ";
				cin>>num;
				cout<<"\nThe square is : "<<square(num);
				cout<<"\nPress any key to continue ";
				getch();
				goto start3;
			}
			if (operation==3)
			{
				double sum=0;
				int numbers;
				cout<<"\nEnter the amount of numbers you want to calculate average for :  ";
				cin>>numbers;
				while(numbers<1)
				{
					cout<<"\nInvalid\nEnter the amount of numbers you want to calculate average for :  ";
				cin>>numbers;
				}
				double arr[numbers];
				cout<<"\nThe average is : "<<average(arr,numbers);
				cout<<"\nPress any key to continue ";
				getch();
				goto start3;
			}
			if (operation==4)
			{
			goto start;	
			}
			else
			{
				cout<<"\ninvalid\n";
				goto start3;
			}
			
		}
	else if (choice==3)
		{    start4:
			int operation=Number_Conversion_Menu();
			if(operation==1)
			{    
			     int num;
				cout<<"\nEnter decimal number : ";
				cin>>num;
				cout<<"\nThe binary is : "<<DecToBin(num);
				cout<<"\nPress any key to continue ";
				getch();
				goto start4;
			}
			if(operation==2)
			{
				long int binary;
				int length;
				cout<<"\nEnter length of binary : ";
				cin>>length;
				int arr2[length];
				cout<<"\nEnter binary digits one by one : ";
				for(int i=0;i<length;i++)
				{
					cin>>arr2[i];
					while(arr2[i]!=0 && arr2[i]!=1)
					{
						cout<<"\ninvalid\n Enter this character again \n";
						cin>>arr2[i];
					}
				}
				cout<<"\nThe decimal is : "<<BinToDec(arr2,length);
			}
			if(operation==3)
			{   double temp;
				cout<<"Enter temperature in degrees :  ";
				cin>>temp;
				cout<<"\nThe temp in fahrenheit is : "<<tempChange(temp);
			}
			if(operation==4)
			{
				goto start;
			}
		}
	else if ( choice==4 )
		{
			cout<<"\nThanks for using the calculator \n";
			goto end;
		}
	end:
		cout<<" ";
	}
