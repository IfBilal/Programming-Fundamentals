#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum,sum2;
	cout<<"Original Matrix is : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
     cout<<endl<<"The transpose of the Matrix is : "<<endl;
     
     for(int i=0;i<3;i++)
     {
     	for(int k=0;k<3;k++)
     	{
     		cout<<arr[k][i]<<" ";
		}
		cout<<endl;
	}
	
	
}
