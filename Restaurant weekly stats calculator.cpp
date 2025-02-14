#include<iostream>
#include<iomanip>
using namespace std;
int main()
{    	string day[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
          string food[3]={"Breakfast","Lunch","Dinner"};
          string note[7];
          int week=0,max=-1;
          string days;
          int sum1=0,sum2=0,sum3=0;
     
	int rev[7][3];
	for(int row=0;row<7;row++)
	{ cout<<"Enter "<<day[row]<<"'s revenue : "<<endl;
		for(int col=0;col<3;col++)
		{ start:
			cout<<food[col]<<" : ";
			cin>>rev[row][col];
			if(rev[row][col]<0)
			{
				cout<<"\nInvalid\n";
				goto start;
			}
			if(col==0 )
			sum1=sum1+rev[row][col];
			if(col==1 )
			sum2=sum2+rev[row][col];
			if(col==2 )
			sum3=sum3+rev[row][col];
		}
		cout<<"\nSpecial notes for "<<day[row]<<" (or - if you don’t want to add notes) : ";
		cin.ignore();
		getline(cin,note[row]);
		if(note[row]=="-")
		{
			note[row]="No";
		}
	}
	cout<<"\nWeekly Revenue List : ";
	cout<<"=========================\n";
	cout<<"            "<<food[0]<<"   "<<food[1]<<"       "<<food[2]<<"   "<<"Daily Total"<<endl;
	for(int row=0;row<7;row++)
	{     cout<<setw(12)<<left<<day[row];
	int total=0;
		for(int col=0;col<3;col++)
		{
			cout<<setw(7)<<left<<rev[row][col]<<"     ";
			total=total+rev[row][col];
			if(max<total)
			{
			max=total;
			days=day[row];
		}
		
	}
		cout<<"\b\b"<<total;
		cout<<"\n";
	}
	cout<<"\nSummary : \n";
	cout<<"=================\n";
	cout<<"\nHighest daily revenue : "<<days<<" ( "<<max<<" ) ";
	float avg1=sum1/7;
	float avg2=sum2/7;
	float avg3=sum3/7;
	if(avg1>=avg2 && avg1>=avg3)
	cout<<"\nMost Profitable meal Time : Breakfast ( Average "<<avg1<<" )";
	else if(avg2>=avg1 && avg2>=avg3)
	cout<<"\nMost Profitable meal Time : lunch ( Average "<<avg2<<" )";
	else if(avg3>=avg2 && avg3>=avg1)
	cout<<"\nMost Profitable meal Time : Dinner ( Average "<<avg3<<" )";
	cout<<"\nTotal weekly revenue : "<<sum1+sum2+sum3;
if(sum1>sum2 && sum1>sum3)
cout<<"\nPeak hours : Breakfast ";
if(sum2>sum1 && sum2>sum3)
cout<<"\nPeak hours : lunch ";
if(sum3>sum2 && sum3>sum1)
cout<<"\nPeak hours : dinner ";
cout<<"\nSpecial notes \n";
for(int i=0;i<7;i++)
{
	if(note[i]!="No")
	cout<<day[i]<<" : "<<note[i]<<endl;
}
}
