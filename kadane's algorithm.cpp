#include<iostream>
using namespace std;
int main()
{    //In kadane's algorithm we add the values on each index of array and compare it with max if it is greater than max we replace max with that value
    //But the main concept is that when we add a negative value to tempmax and if tempmax becomes negative we reset it to zero because we want maximum sum 
//we have to decide whether we have to include a negative value or not, so we add it to the sum of previous values and if the answer is negative this means the number will cancel
//the effect of sum of all previous numbers and also give more negative value which means that adding that will not be beneficial so we restore the tempmax to zero and start adding values
// from the next index, if after adding a negative value to the previous sums gives a positive value this means that the negative value will not cancel all the effect of sum before that
//number and after the negative value some of the sum will still remain there which can be beneficial in finding the maximum sum so we can utilize that negative value there if adding
//it wont result in a negative number
	int max=INT_MIN,tempmax=0;
	int  num;
	cout<<"Enter number of elements in the array : ";
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		cout<<"\nEnter element number "<<i+1<<" of array : ";
		cin>>arr[i];
	}
	for(int start=0;start<num;start++)
	{
		tempmax=tempmax+arr[start];
		if(max<tempmax)               
		max=tempmax;
		if(tempmax<0)
		tempmax=0;
	}
	cout<<"\nThe highest sum of the sub array is : "<<max;
}
