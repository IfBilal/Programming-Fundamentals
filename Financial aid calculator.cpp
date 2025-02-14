#include<iostream>
using namespace std;
int main(){	cout<<"The output of task 8 is"<<endl;
	int F_income;
	float GPA;
	cout<<"Enter your family income ";
	cin>>F_income;
	cout<<"\nEnter your GPA ";
	cin>>GPA;
	(F_income<50000 && GPA>= 3.5)?cout<<"\nFully aid":(F_income <100000 && GPA>=3.0)?cout<<"\n Partial Aid":cout<<"\n Not Eligible";
	(GPA>4.0)?cout<<"\nThe boosted GPA is "<<GPA+0.5:cout<<"\nNo boost to GPA";
	return 0;
}
