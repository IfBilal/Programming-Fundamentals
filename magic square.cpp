#include<iostream>
#include<iomanip>
using namespace std;

void pattern(int );
int main()
{
	pattern(7);
}
void pattern(int i)
{
	int arr[i][i];
	for(int k=0;k<i;k++)
	{
	for(int u=0;u<i;u++)
	arr[k][u]=0;
	}
	arr[0][i/2]=1;
	int row=0;
	int col=i/2;

	for(int p=2;p<=(i*i-1);p++)
	{
		int row1=row,col1=col;
		col++;
		row--;
		if(row<0)
		row=i-1;
		if(col>i-1)
		col=0;
	if(arr[row][col]!=0)
		{
		row=row1+1;
		col=col1;
		}
		
		arr[row][col]=p;
	}
	for(int k=0;k<i;k++)
	{
	for(int u=0;u<i;u++)
     if(arr[k][u]==0)
     arr[k][u]=i*i;
	}

	for(int k=0;k<i;k++)
	{
	for(int u=0;u<i;u++)
	cout<<setw(2)<<arr[k][u]<<"  ";
	cout<<endl;
	}
}
