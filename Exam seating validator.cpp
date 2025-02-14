                                             /*M.Bilal tahir
                                             24i-3166
                                             SE-B*/

//No adjacent seats will have same labels

#include<iostream>
using namespace std;
int main(){
	restart:
	char arr[4][4];
	char retry;
	bool valid=true;
	cout<<"Welcome to Exam Seating Validator!\n================================";
	cout<<"\nEnter seating arrangement (A, B, or C) : \n";
	for(int row=0;row<4;row++)
	{
		for(int col=0;col<4;col++)
		{
			start:
			cout<<"Row "<<row+1<<", Seat "<<col+1<<" : ";
			cin>>arr[row][col];
			if(arr[row][col]!='A' && arr[row][col]!='B' && arr[row][col]!='C')
			{
				cout<<"\nInvalid \n";
				goto start;
			}
		}
	}
	cout<<"\nThe seating arrangement is : \n";
	for( int row=0;row<4;row++)
	{
		for(int col=0;col<4;col++)
		{
			cout<<arr[row][col]<<" ";
			
		}
		cout<<endl;
	}
	for ( int row=0;row<4;row++)
	{
		for( int col=1;col<=2;col++)
          {
          	if(arr[row][col]==arr[row][col-1] || arr[row][col]==arr[row][col+1])
          	valid=false;
		}		
	}
		for ( int row=1;row<=2;row++)
	{
		for( int col=0;col<4;col++)
          {
          	if(arr[row][col]==arr[row+1][col] || arr[row][col]==arr[row-1][col])
          	valid=false;
          }
     }
     cout<<"Validation Results:\n================================\n";
	if(valid==true)
	cout<<"\nValid seating arrangement ";
	else
	cout<<"\nInvalid seating arrangement ";
	cout<<"\nEnter 'Y' to try again or any other key to exit : ";
	cin>>retry;
	if(retry=='Y')
	goto restart;
		else
		cout<<"\nEnd ";
		
}
