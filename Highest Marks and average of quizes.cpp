//M.Bilal tahir
//24i-3166
//SE-B



#include<iostream>
using namespace std;
int main()
{  int N1,N2,N3,N4,N5;
double avg;
cout<<"Enter marks of student 1 : ";
cin>>N1;
cout<<"Enter marks of student 2 : ";
cin>>N2;
cout<<"Enter marks of student 3 : ";
cin>>N3;
cout<<"Enter marks of student 4 : ";
cin>>N4;
cout<<"Enter marks of student 5 : ";
cin>>N5;
cout<<"\nThe marks of student 1 is : "<<N1;
cout<<"\nThe marks of student 2 is : "<<N2;
cout<<"\nThe marks of student 3 is : "<<N3;
cout<<"\nThe marks of student 4 is : "<<N4;
cout<<"\nThe marks of student 5 is : "<<N5;
avg=(N1+N2+N3+N4+N5)/5;
cout<<"\nThe average of quiz is : "<<avg;
if(N1>N2 && N1>N3 && N1>N4 && N1>N5)
cout<<"\nStudent 1 has the highest marks ";
else if(N2>N1 && N2>N3 && N2>N4 && N2>N5)
cout<<"\nStudent 2 has the highest marks ";
else if(N3>N2 && N3>N1 && N3>N4 && N3>N5)
cout<<"\nStudent 3 has the highest marks ";
else if(N4>N2 && N4>N3 && N4>N1 && N4>N5)
cout<<"\nStudent 4 has the highest marks ";
else if(N5>N2 && N5>N3 && N5>N4 && N5>N1)
cout<<"\nStudent 5 has the highest marks ";

}
