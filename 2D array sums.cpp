#include<iostream>
using namespace std;

int main()
{
int row,col;

int max=INT_MIN,max2=INT_MIN;
cout<<"Enter the no of rows of matrix : ";
cin>>row;
cout<<"\nEnter the no of column of matrix : ";
cin>>col;
int sum[row];
int sum2[col];
int sum3=0,sum4=0; //sum3 for diagonal's sum and sum4 for antidiagonal's sum      
int arr[row][col];
for(int i=0;i<row;i++)
sum[i]=0;
for(int j=0;j<col;j++)
sum2[j]=0;
for(int i=0;i<row;i++)
{
	
		for(int j=0;j<col;j++)
          {
          cout<<"\nEnter element of Matrix with row "<<i+1<<" and column "<<j+1<<" : ";
          cin>>arr[i][j];
          }
}
cout<<"\nYour Matrix is : \n";
for(int i=0;i<row;i++)
{
	for( int k=0;k<col;k++)
	{
		cout<<arr[i][k]<<" ";
		sum[i]=sum[i]+arr[i][k];

	}
	cout<<endl;
	if(max<sum[i])
	max=sum[i];
}

for(int h=0;h<col;h++)
{
	for(int y=0;y<row;y++)
	{
		sum2[h]=sum2[h]+arr[y][h];
	}
	if(max2<sum2[h])
	max2=sum2[h];
}
for(int i=0;i<row;i++)
cout<<"\nThe sum of row "<<i+1<<" is : "<<sum[i];
cout<<"\nThe maximum sum of rows is of row ";
for(int i=0;i<row;i++)
{
	if(sum[i]==max)
	cout<<i+1<<" ";
}
cout<<" which is "<<max;
for(int i=0;i<col;i++)
cout<<"\nThe sum of col "<<i+1<<" is : "<<sum2[i];
cout<<"\nThe maximum sum of columns is of column ";
for(int i=0;i<col;i++)
{
	if(sum[i]==max2)
	cout<<i+1<<" ";
}
cout<<" which is : "<<max2;

if(row==col)
{
	for(int i=0,j=0;(i<row && j<col);i++,j++) //use either row or column in condition both will be true bcz both values are same
	sum3=sum3+arr[i][j];
	cout<<"\nThe sum of diagonal is : "<<sum3;
}
else
cout<<"\nNot a square matrix so no sum of diagonal ";
if(row==col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=col-1;j>0;j++)  //j>row or j>col both are correct as row = column
		{
			sum4=sum4+arr[i][j];
		}
	}
	cout<<"\nThe sum of antidiagonal is : "<<sum4;
}
else
cout<<"\nNon square matrix so no antidiagonal sum";
return 0;
}
