#include<iostream>
#include<string>
using namespace std;
int main()
{
//int lines2;
//cout<<"Enter no of lines u want : ";
//cin>>lines2;
//	for(int lines=1;lines<=lines2;lines++)	
//{
//	for(int words=1;words<=lines;words++)
//	{ 
//	cout<<"*";
//     }
//     cout<<endl;
//}

//int limit;
//	cout<<"Enter a positive number : ";
//	cin>>limit;
//	while(limit<0)
//	{cout<<"\nInvalid \nEnter a positive number : ";
//	cin>>limit;
//} 
//	for(limit;limit>0;limit--)
//	{
//		for(int j=1;j<=limit;j++)
//		cout<<j;
//	     cout<<endl;
//	}


//int i,j;
//for(i=1;i<=5;i++)
//{
//	for(j=5;j>=i;j--)
//	{
//	cout<<"*";
//	}
//	cout<<endl;
//}


//int i,j;
//int rows;
//cout<<"Enter no of lines : ";
//cin>>rows;
//for(i=1;i<=rows;i++)
//{
//	for(j=rows;j>=i;j--)
//	{
//	cout<<"*";
//	}
//	cout<<endl;
//}





//	for(int lines=1;lines<=5;lines++)	
//{
//	for(int words=1;words<=lines;words++)
//	{ 
//	cout<<"*";
//     }
//     cout<<endl;
//}
//int i,j;
//for(i=1;i<=5;i++)
//{
//	for(j=5;j>=i;j--)
//	{
//	cout<<"*";
//	}
//	cout<<endl;
//}




//	for(int lines=1;lines<=5;lines++)	
//{
//	for(int words=1;words<=lines;words++)
//	{ 
//	cout<<"*";
//     }
//     cout<<endl;
//}
//int i,j;
//for(i=1;i<=5;i++)
//{
//	for(j=5;j>=i;j--)
//	{
//		if(j==3)
//		continue;
//	cout<<"*";
//	}
//	cout<<endl;
//}


//int lines,space,j,k;
//cout<<"Enter no of lines : ";
//cin>>lines;
//for(int i=1;i<=lines;i++)
//{
//	for(j=1;j<=lines-i;j++)
//	cout<<" ";
//	for(k=1;k<=i;k++)
//	cout<<"* ";
//	cout<<endl;
//	
//}



//***********inverted triangle******
//int lines,space,j,k;
//cout<<"Enter no of lines : ";
//cin>>lines;
//for(int i=1;i<=lines;i++)
//{
//	for(int space=1;space<=i;space++)
//	cout<<" ";
//	for(int k=lines;k>=i;k--)
//	cout<<"* ";
//	cout<<endl;
//	
//}



//**********square***********
//int a,b,lines;
//cout<<"Enter a number : ";
//cin>>lines;
//for(b=1;b<=lines;b++)
//{
//	for(int c=1;c<=lines;c++)
//	cout<<"*";
//	cout<<endl;
//}

//***********hollow square***********
//for(int i=1;i<=5;i++)
//{
//	for(int j=1;j<=5;j++)
//	{
//		if((i==2||i==3||i==4 )&& (j==2||j==3||j==4))
//	{
//		cout<<"  ";
//		continue;
//	}
//	cout<<"* ";
//     }
//	cout<<"\n";
//}

//**************parallelogram************
// for(int i=1;i<=5;i++)
// {
// 	for( int j=4;j>=(i-1);j-- )
//     cout<<" ";
//     for(int k=1;k<=8;k++)
//	cout<<"*";
//	    
//	    cout<<endl;
// }


//********************triangle***************
//for(int i=1;i<=4;i++)
//{
//	for(int j=3;j>=i;j--)
//	cout<<" ";
//	for(int k=1;k<=i;k++)
//	{
//	cout<<"*";
//     if(k>=2)
//	cout<<"*";
//	}
//	cout<<endl;
//}


//*************Hollow paralellogram with a=a+1 written inside************ 
//string a="a=a+1 ";
//for(int i=1;i<=5;i++)
//{
//	for(int j=4;j>=i;j--)            
//	cout<<" ";
//	for(int k=1;k<=5;k++ )
//	{
//		if((i==2 && k==2 ) || (i==2 && k==3 ) ||(i==2 && k==4 )  ||(i==3 && k==3) ||(i==3 && k==5)||(i==3 && k==3)|| (i==4 && k==2 ) ||(i==4 && k==3 )||(i==4 && k==4 ))
//		cout<<"   ";
//		else if(i==3 && k==2)
//		cout<<a;
//		
//		else
//		cout<<"*  ";
//		
//	}
//	cout<<endl;
//}

//******************character pattern*****************
//int line;
//	cout<<"Enter no of lines : ";
//	cin>>line;
//	char a=65;
//	for(int i=1;i<=line;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//		cout<<a;
//		}
//		a++;
//		cout<<endl;
//	}


//***********triangle number pattern****************
//    int lines;
//    cout << "Enter the number of lines: ";
//    cin >> lines;
//
//    for (int i=1; i<=lines;i++) {
//    for (int space=1;space<=lines-i;space++) {
//            cout << "  ";
//        }
//        int num=i;
//        for (int j=1;j<=i;j++) {
//            cout <<num++<< " ";
//        }
//        
//    
//        num-=2;
//        for (int j = 1; j < i; j++) {
//            cout << num-- << " ";
//        }
//
//          cout << endl;
//    }


//********character pattern*****
//cout<<"\nEnter no of lines : ";
//cin>>line;
//for(int i=1;i<=line;i++)
//{
//	char a=i+64;
//	for(int j=1;j<=line-i+1;j++)
//	cout<<a++;
//	a--;
//	a--;
//	for(int k=line-1;k>=1+i-1;k--)
//	cout<<a--;
//	cout<<endl;
//	for(int b=1;b<=i;b++)
//	cout<<" ";
//}


}

