#include<iostream>
using namespace std;
int main()
{cout<<"Output of task 5 \n";
	double weight,height,BMI;
	cout<<"Enter the weight in kilograms : ";
	cin>>weight;
	cout<<"Enter the height in meters : ";
	cin>>height;
	BMI=weight/(height*height);
	cout<<"Your BMI is : "<<BMI;
	if(BMI<18.5)
	cout<<"\nUnder weight";
	else if(BMI>=18.5 && BMI<24.9)
	cout<<"\nNormal weight";
	else if(BMI>=25 && BMI<29.9)
	cout<<"\nOverweight";
	else if(BMI>=30)
	cout<<"\nObesity";
	
	
	
}
