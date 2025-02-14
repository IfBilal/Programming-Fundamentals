                                                 /*M.Bilal tahir
                                             24i-3166
                                             SE-B*/



#include<iostream>
using namespace std;
int main()
{    
bool flag;
		char arr[4][4];
	bool valid=true;
	cout<<"Welcome to Mini Sudoku Validator!\n================================\n";
	cout<<"Enter numbers for the 4x4 grid (1-4 only):";
		for(int row=0;row<4;row++)
	{
		for(int col=0;col<4;col++)
		{
			start:
			cout<<"Row "<<row+1<<", Col "<<col+1<<" : ";
			cin>>arr[row][col];
			if(arr[row][col]!='1' && arr[row][col]!='2' && arr[row][col]!='3' && arr[row][col]!='4')
			{
				cout<<"\nInvalid \n";
				goto start;
			}
		}
	}
		cout<<"\nCurrent Grid : \n";
	for( int row=0;row<4;row++)
	{
		for(int col=0;col<4;col++)
		{
			cout<<arr[row][col]<<" ";
			
		}
		cout<<endl;
	}
	for( int row=0;row<4;row++)
	{     for(int k=0;k<4;k++)
		for (int i=0;i<4;i++)
		{     if(i==k)
		continue;
			if(arr[row][k]==arr[row][i])
			valid=false;
		}
     }
     	for( int col=0;col<4;col++)
	{     
	for(int k=0;k<4;k++)
	{	
		for (int i=0;i<4;i++)
		{     if(i==k)
		continue;
			if(arr[k][col]==arr[i][col])
			valid=false;
		}
     }
     
	}
	cout<<"Validation Results:\n================================\n";
	if(valid==true)
	cout<<"\nAll rules followed Valid Sudoku puzzle ";
	else
	{
	cout<<"\nInvalid Sudoku Puzzle ";
     if ( flag==false )
	{
		for ( int i=0;i<4;i++)
		{
			for ( int j=0;j<4;j++)
			{
				if (i<3&&arr[i][j]==arr[i+1][j])
				{
	                cout<<"Column '"<<i+1<<"' contains duplicate number : "<<arr[i][j]<<endl;
	       		}
				if (j<3&&arr[i][j]==arr[i][j+1])
				{
	  	            cout<<"Row '"<<j+1<<"' contains duplicate number : "<<arr[i][j]<<endl;
         	          }
			}
		}
     }
	
	}
}
	

