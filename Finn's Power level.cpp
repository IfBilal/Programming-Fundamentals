#include<iostream>

using namespace std;
int main(){
	cout<<"Welcome to Finn's Power Level Tracker!\n";
     cout<<"=======================================\n";
     cout<<"Enter Finn's power level (1-100) for each stage : \n";
     int max=0,min=100,sum=0;
     int R_high,C_high,R_low,C_low;
     int pow[3][4];
     string kingdom[3][4]={{"Grass lands","Candy Kingdom","Ice Kingdom","Fire Kingdom"},{"Slime Kingdom","Breakfast Kingdom","Cloud KIngdom","Lemongrab Kingdom"},{"Mystery Mountain","Wildberry Kingdom","Hotdog Kingdom","Magic Man's Place"}};
    for(int row=0;row<3;row++)
    {
    	for(int col=0;col<4;col++)
    	{  start:
    	cout<<kingdom[row][col]<<" : ";
	    cin>>pow[row][col];
	    cout<<endl;
	    if(pow[row][col]<0 || pow[row][col]>100)
	    {
	    	cout<<"Invalid\n";
	    	goto start;
	    }
	    if(max<pow[row][col])
	    {
	    	max=pow[row][col];
	    	R_high=row;
	    	C_high=col;
		}	
		if(min>pow[row][col])
		{
			min=pow[row][col];
			R_low=row;
			C_low=col;
		}
	}
    }
    cout<<"\nPower levels :\n";
    cout<<"====================\n";
    
    for(int row=0;row<3;row++)
    {
    	for(int col=0;col<4;col++)
    	{
    	cout<<kingdom[row][col]<<"["<<row<<"]"<<"["<<col<<"]"<<" = "<<pow[row][col]<<endl;
    	
	}
    }
    cout<<"\nAnalysis :\n";
cout<<"================\n";
    cout<<"\nHighest power level : "<<max<<"(Row : "<<R_high<<", Col : "<<C_high<<" )";
    cout<<"\nLowest power level : "<<min<<"(Row : "<<R_low<<", Col : "<<C_low<<" )";
    for(int row=0;row<3;row++){
    for(int col=0;col<4;col++)
    {
    	sum=sum+pow[row][col];
    }
}

float avg =sum/12;
cout<<"\nThe average power is : "<<avg;
cout<<"\nAnalysis : \n";
cout<<"==================\n";
if(avg<75)
cout<<"\nYour average power level is below 75. You'll need to train more before taking on Marceline the Vampire Queen.";
else
cout<<"\nYour average is above 75. You can fight Marceline the Vampire Queen";

}
