#include<iostream>
using namespace std;
int main()
{    int row1,col1;
char color,play;
int green=0,white=12;
	char cake[4][4]={{'W','W','W','W'},{'W','-','-','W'},{'W','-','-','W'},{'W','W','W','W'}};
	cout<<"Initial design :\n";
	cout<<"===================\n";
	for(int row=0;row<4;row++)
	{
		for(int col=0;col<4;col++)
		{
			cout<<cake[row][col]<<" ";
		}
		cout<<endl;
	}
	start:
	cout<<"\nEnter row (1-4) : ";
	cin>>row1;
	cout<<"\nEnter column (1-4) : ";
	cin>>col1;
	if((row1<1 || row1>4)|| (col1<1 || col1>4))
	{cout<<"\nInvalid input\n";
	goto start;}
	if(row1==1 || row1==4)
	{
		cout<<"\nInvalid \nYou cant change the borders \n";
		goto start;
	}
		if((row1==2 && col1==1) || (row1==2 && col1==4) )
	{
		cout<<"\nInvalid \nYou cant change the borders \n";
		goto start;
	}
		if((row1==3 && col1==1) || (row1==3 && col1==4)) 
	{
		cout<<"\nInvalid \nYou cant change the borders \n";
		goto start;
	}
	start2:
	cout<<"\nEnter colour (W/G) : ";
	cin>>color;
	while(color!='G' && color!='W')
	{
	cout<<"\nInvalid\n";
         goto start2;  
		}
		if(cake[row1-1][col1-1]=='W' && color=='G')
		white--;
		if(cake[row1-1][col1-1]=='G' && color=='W')
		green--;
	cake[row1-1][col1-1]=color;
	if(color=='W')
	white++;
	if(color=='G')
	green++;
	
	
	cout<<"Updated cake is : \n";
	for (int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<cake[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nDesign stats : \n";
	cout<<"\nWhite tiles : "<<white;
	cout<<"\nGreen tiles : "<<green;
	start3:
	cout<<"\nContinue (Y/N) : ";
	cin>>play;
	if(play!='Y' && play!='N')
     {
     	cout<<"\nInvalid \n";
     	goto start3;
	}
	if(play=='Y')
	goto start;
		if(play=='N')
		{
		cout<<"\nFinal cake is : \n";
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				cout<<cake[i][j]<<" ";
				
			}
			cout<<endl;
		}
	}
	
}
