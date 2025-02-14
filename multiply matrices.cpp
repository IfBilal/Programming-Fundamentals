#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int row,row1,col,col1;
	 
     cout<<"\nEnter no of rows of first matrix : ";
	cin>>row;
	cout<<"\nEnter no of column of first matrix : ";
	cin>>col;	
	cout<<"\nEnter no of rows of second matrix : ";
	cin>>row1;
	cout<<"\nEnter no of column of second matrix : ";
	cin>>col1;
	int mat1[row][col];
	int mat2[row1][col1];
	int mul[row][col1];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col1;j++)
		{
			mul[i][j]=0;
		}
	}
	if(col!=row1)
{
	cout<<"\nCan't be muliplied ";
	goto ending;
}

	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<"\nEnter row "<<i+1<<" and column "<<j+1<<" of first matrix : ";
		cin>>mat1[i][j];
		}
	}
		for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
		cout<<"\nEnter row "<<i+1<<" and column "<<j+1<<" of second matrix : ";
		cin>>mat2[i][j];
		}
	}
		cout<<"\nYour first matrix is : \n";
		for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<setw(5)<<left<<mat1[i][j];
	     }
		cout<<endl;
	}
		cout<<"\nYour second matrix is : \n";
		for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		cout<<setw(5)<<left<<mat2[i][j];
		cout<<endl;
		}
		
	 for (int i = 0; i < row; i++) {
        for (int j = 0; j < col1; j++) {
            for (int k = 0; k < col; k++) {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
		cout<<"\nYour final matrix is : \n";
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col1;j++)
			{
				cout<<setw(5)<<left<<mul[i][j];
			}
			cout<<endl;
		}
          ending:
     	cout<<" ";
}
