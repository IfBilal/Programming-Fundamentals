#include<iostream>
using namespace std;
int main()
{
	double a,b;
	char op;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	again:
	cout<<"Enter operation u want to perform \nAddition + \nSubtraction - \nDivision / \nMultiplication * \nCancel . \n";
	cin>>op;
	switch(op)
	{
	case '+':
	cout<<a<<" + "<<b<<" = "<<a+b;
	break;
	case '-':
	cout<<a<<" - "<<b<<" = "<<a-b;
	break;
	case '/':
	cout<<a<<" / "<<b<<" = "<<a/b;
	break;
	case '*':
	cout<<a<<" * "<<b<<" = "<<a*b;
	break;
	case '.':
	return 0;
	break;
	default:
		cout<<"Invalid operation \n";
		goto again;
}
}
