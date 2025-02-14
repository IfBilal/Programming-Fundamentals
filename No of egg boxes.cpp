                                  /*
                                  M.Bilal Tahir
                                  24i-3166
                                  Assignment 2
                                  SE-B
                                  Question 1
                                  */
#include<iostream>
using namespace std;
int main()
{
	long long int eggs,egg30,left1,egg24,left2,egg18,left3,egg12,left4,egg6,left5;
	cout<<"Enter the number of eggs : ";
	cin>>eggs;
	while(eggs<0 )
	{ 
	 cout<<"Invalid Input "<<endl;
	 cout<<"Enter the number of eggs : ";
	 cin>>eggs;
     }
     
		egg30=eggs/30;   //finds no of packets of 30
		left1=eggs%30;   //finds remaining eggs from packet of 30 
		egg24=eggs/24;   //finds no of packets of 24
		left2=eggs%24;   //finds remaining eggs from packet of 24
		egg18=eggs/18;   //finds no of packets of 18
		left3=eggs%18;   //finds remaining eggs from packet of 18
		egg12=eggs/12;   //finds no of packets of 12
		left4=eggs%12;   //finds remaining eggs from packet of 12
		egg6=eggs/6;     //finds no of packets of 6
		left5=eggs%6;    //finds remaining eggs from packet of 6
		cout<<"\nNumber of 30 eggs packing : "<<egg30;
		cout<<"  Number of Leftover eggs : "<<left1<<endl;
		cout<<"\nNumber of 24 eggs packing : "<<egg24;
		cout<<"  Number of Leftover eggs : "<<left2<<endl;
		cout<<"\nNumber of 18 eggs packing : "<<egg18;
		cout<<"  Number of Leftover eggs : "<<left3<<endl;
		cout<<"\nNumber of 12 eggs packing : "<<egg12;
		cout<<"  Number of Leftover eggs : "<<left4<<endl;
		cout<<"\nNumber of 6 eggs packing : "<<egg6;
		cout<<"  Number of Leftover eggs : "<<left5<<endl;
	
}
	
