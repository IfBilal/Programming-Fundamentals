#include<iostream>
using namespace std;
int main()
{ cout<<"M.Bilal Tahir, 24i-3166, Output of task 4"<<endl;
	int x,y;
	cout<<"Enter the x coordinate : ";
	cin>>x;
	cout<<"\nEnter the y coordinate : ";
	cin>>y;
	if(x!=0 && y!=0)
	{  if(x>0 && y>0)
	cout<<"The point ("<<x<<","<<y<<")"<<" lies in Quadrant I"<<endl;
     if (x<0 && y>0)
     cout<<"The point ("<<x<<","<<y<<")"<<" lies in Quadrant II"<<endl;
     if (x<0 && y<0)
     cout<<"The point ("<<x<<","<<y<<")"<<" lies in Quadrant III"<<endl;
     if (x>0 && y<0)
     cout<<"The point ("<<x<<","<<y<<")"<<" lies in Quadrant IV"<<endl;
	}
	else if(x==0 && y==0)
	cout<<"The point ("<<x<<","<<y<<")"<<" lies on origin"<<endl;
	else if(x==0)
	cout<<"The point ("<<x<<","<<y<<")"<<" lies on y-axis"<<endl;
	else if(y==0)
	cout<<"The point ("<<x<<","<<y<<")"<<" lies on x-axis"<<endl;
	
	
}
