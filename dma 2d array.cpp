#include<iostream>
using namespace std;
int main()
{	int row,col;
	cout<<"Enter no of rows : ";
	cin>>row;
	cout<<"Enter no of cols : ";
	cin>>col;
	int **ptr=new int*[row];
	for(int i=0;i<row;i++)
	{
		ptr[i]=new int[col];
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<"Enter element ";
		cin>>ptr[i][j];
		}
	}
		for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		cout<<ptr[i][j]<<"  ";
		cout<<endl;
	}
	for(int i=0;i<row;i++)
	{
		delete[] ptr[i];
	}
	delete []ptr;
	
}
