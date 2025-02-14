#include<iostream>                 //M.Bilal Tahir,24i-3166,question7
#include<string>
using namespace std;
int main()
{
	cout<<"                                    Output of question7\n";
	double sub1,sub2,sub3,sub4,sub5;
	int cred1,cred2,cred3,cred4,cred5;
	double GP1,GP2,GP3,GP4,GP5,grade_points,total_credits,GPA;
	// sub variable will store the marks of each subject and cred will store the credit hours of each subject respectively
	//GP variable will store the grade point of each subject
	cout<<"Enter marks of first subject  "<<endl;
	cin>>sub1;
	cout<<"Enter credit hours of first subject  "<<endl;
	cin>>cred1;
	
	// using nested ternary operator to assign a grade to each subject and finding grade point of each subject
	 
	(sub1>=90)?cout<<"Your grade in this subject is A+   ":(sub1>=86 && sub1<90)?cout<<"Your Grade in this subject is A    ":(sub1>=82 && sub1<86)?cout<<"Your Grade in this subject is A-    ":(sub1>=78 && sub1<82)?cout<<"Your Grade in this subject is B+   ":(sub1>=74 && sub1<78)?cout<<"Your Grade in this subject is B    ":(sub1>=70 && sub1<74)?cout<<"Your Grade in this subject is B-    ":(sub1>=66 && sub1<70)?cout<<"Your Grade in this subject is C+   ":(sub1>=62 && sub1<66)?cout<<"Your Grade in this subject is C   ":(sub1>=58 && sub1<62)?cout<<"Your Grade in this subject is C-   ":(sub1>=54 && sub1<58)?cout<<"Your Grade in this subject is D+  ":(sub1>=50 && sub1<54)?cout<<"Your Grade in this subject is D  ":(sub1<=49)?cout<<"Your Grade in this subject if F ":cout<<"Invalid marks ";
	(sub1>=90)?GP1=4.00:(sub1>=86 && sub1<90)?GP1=4.00:(sub1>=82 && sub1<86)?GP1=3.67:(sub1>=78 && sub1<82)?GP1=3.33:(sub1>=74 && sub1<78)?GP1=3.00:(sub1>=70 && sub1<74)?GP1=2.67:(sub1>=66 && sub1<70)?GP1=2.33:(sub1>=62 && sub1<66)?GP1=2.00:(sub1>=58 && sub1<62)?GP1=1.67:(sub1>=54 && sub1<58)?GP1=1.33:(sub1>=50 && sub1<54)?GP1=1.00:(sub1<=49)?GP1=0:GP1=0;
	cout<<"\nEnter marks of second subject  "<<endl;
	cin>>sub2;
	cout<<"\nEnter credit hours of second subject  "<<endl;
	cin>>cred2;
	(sub2>=90)?cout<<"Your grade in this subject is A+   ":(sub2>=86 && sub2<90)?cout<<"Your Grade in this subject is A    ":(sub2>=82 && sub2<86)?cout<<"Your Grade in this subject is A-    ":(sub2>=78 && sub2<82)?cout<<"Your Grade in this subject is B+   ":(sub2>=74 && sub2<78)?cout<<"Your Grade in this subject is B    ":(sub2>=70 && sub2<74)?cout<<"Your Grade in this subject is B-    ":(sub2>=66 && sub2<70)?cout<<"Your Grade in this subject is C+   ":(sub2>=62 && sub2<66)?cout<<"Your Grade in this subject is C   ":(sub2>=58 && sub2<62)?cout<<"Your Grade in this subject is C-   ":(sub2>=54 && sub2<58)?cout<<"Your Grade in this subject is D+  ":(sub2>=50 && sub2<54)?cout<<"Your Grade in this subject is D  ":(sub2<=49)?cout<<"Your Grade in this subject if F ":cout<<"Invalid marks ";
	(sub2>=90)?GP2=4.00:(sub2>=86 && sub2<90)?GP2=4.00:(sub2>=82 && sub2<86)?GP2=3.67:(sub2>=78 && sub2<82)?GP2=3.33:(sub2>=74 && sub2<78)?GP2=3.00:(sub2>=70 && sub2<74)?GP2=2.67:(sub2>=66 && sub2<70)?GP2=2.33:(sub2>=62 && sub2<66)?GP2=2.00:(sub2>=58 && sub2<62)?GP2=1.67:(sub2>=54 && sub2<58)?GP2=1.33:(sub2>=50 && sub2<54)?GP2=1.00:(sub2<=49)?GP2=0:GP2=0;
	cout<<"\nEnter marks of third subject  "<<endl;
	cin>>sub3;
	cout<<"\nEnter credit hours of third subject  "<<endl;
	cin>>cred3;
	(sub3>=90)?cout<<"Your grade in this subject is A+   ":(sub3>=86 && sub3<90)?cout<<"Your Grade in this subject is A    ":(sub3>=82 && sub3<86)?cout<<"Your Grade in this subject is A-    ":(sub3>=78 && sub3<82)?cout<<"Your Grade in this subject is B+   ":(sub3>=74 && sub3<78)?cout<<"Your Grade in this subject is B    ":(sub3>=70 && sub3<74)?cout<<"Your Grade in this subject is B-    ":(sub3>=66 && sub3<70)?cout<<"Your Grade in this subject is C+   ":(sub3>=62 && sub3<66)?cout<<"Your Grade in this subject is C   ":(sub3>=58 && sub3<62)?cout<<"Your Grade in this subject is C-   ":(sub3>=54 && sub3<58)?cout<<"Your Grade in this subject is D+  ":(sub3>=50 && sub3<54)?cout<<"Your Grade in this subject is D  ":(sub3<=49)?cout<<"Your Grade in this subject if F ":cout<<"Invalid marks ";
	(sub3>=90)?GP3=4.00:(sub3>=86 && sub3<90)?GP3=4.00:(sub3>=82 && sub3<86)?GP3=3.67:(sub3>=78 && sub3<82)?GP3=3.33:(sub3>=74 && sub3<78)?GP3=3.00:(sub3>=70 && sub3<74)?GP3=2.67:(sub3>=66 && sub3<70)?GP3=2.33:(sub3>=62 && sub3<66)?GP3=2.00:(sub3>=58 && sub3<62)?GP3=1.67:(sub3>=54 && sub3<58)?GP3=1.33:(sub3>=50 && sub3<54)?GP3=1.00:(sub3<=49)?GP3=0:GP3=0;
	cout<<"\nEnter marks of fourth subject  "<<endl;
	cin>>sub4;
	cout<<"\nEnter credit hours of fourth subject  "<<endl;
	cin>>cred4;
	(sub4>=90)?cout<<"Your grade in this subject is A+   ":(sub4>=86 && sub4<90)?cout<<"Your Grade in this subject is A    ":(sub4>=82 && sub4<86)?cout<<"Your Grade in this subject is A-    ":(sub4>=78 && sub4<82)?cout<<"Your Grade in this subject is B+   ":(sub4>=74 && sub4<78)?cout<<"Your Grade in this subject is B    ":(sub4>=70 && sub4<74)?cout<<"Your Grade in this subject is B-    ":(sub4>=66 && sub4<70)?cout<<"Your Grade in this subject is C+   ":(sub4>=62 && sub4<66)?cout<<"Your Grade in this subject is C   ":(sub4>=58 && sub4<62)?cout<<"Your Grade in this subject is C-   ":(sub4>=54 && sub4<58)?cout<<"Your Grade in this subject is D+  ":(sub4>=50 && sub4<54)?cout<<"Your Grade in this subject is D  ":(sub4<=49)?cout<<"Your Grade in this subject if F ":cout<<"Invalid marks ";
	(sub4>=90)?GP4=4.00:(sub4>=86 && sub4<90)?GP4=4.00:(sub4>=82 && sub4<86)?GP4=3.67:(sub4>=78 && sub4<82)?GP4=3.33:(sub4>=74 && sub4<78)?GP4=3.00:(sub4>=70 && sub4<74)?GP4=2.67:(sub4>=66 && sub4<70)?GP4=2.33:(sub4>=62 && sub4<66)?GP4=2.00:(sub4>=58 && sub4<62)?GP4=1.67:(sub4>=54 && sub4<58)?GP4=1.33:(sub4>=50 && sub4<54)?GP4=1.00:(sub4<=49)?GP4=0:GP4=0;
	cout<<"\nEnter marks of fifth subject  "<<endl;
	cin>>sub5;
	cout<<"\nEnter credit hours of fifth subject  "<<endl;
	cin>>cred5;
	(sub5>=90)?cout<<"Your grade in this subject is A+   ":(sub5>=86 && sub5<90)?cout<<"Your Grade in this subject is A    ":(sub5>=82 && sub5<86)?cout<<"Your Grade in this subject is A-    ":(sub5>=78 && sub5<82)?cout<<"Your Grade in this subject is B+   ":(sub5>=74 && sub5<78)?cout<<"Your Grade in this subject is B    ":(sub5>=70 && sub5<74)?cout<<"Your Grade in this subject is B-    ":(sub5>=66 && sub5<70)?cout<<"Your Grade in this subject is C+   ":(sub5>=62 && sub5<66)?cout<<"Your Grade in this subject is C   ":(sub5>=58 && sub5<62)?cout<<"Your Grade in this subject is C-   ":(sub5>=54 && sub5<58)?cout<<"Your Grade in this subject is D+  ":(sub5>=50 && sub5<54)?cout<<"Your Grade in this subject is D  ":(sub5<=49)?cout<<"Your Grade in this subject if F ":cout<<"Invalid marks ";
	(sub5>=90)?GP5=4.00:(sub5>=86 && sub5<90)?GP5=4.00:(sub5>=82 && sub5<86)?GP5=3.67:(sub5>=78 && sub5<82)?GP5=3.33:(sub5>=74 && sub5<78)?GP5=3.00:(sub5>=70 && sub5<74)?GP5=2.67:(sub5>=66 && sub5<70)?GP5=2.33:(sub5>=62 && sub5<66)?GP5=2.00:(sub5>=58 && sub5<62)?GP5=1.67:(sub5>=54 && sub5<58)?GP5=1.33:(sub5>=50 && sub5<54)?GP5=1.00:(sub5<=49)?GP5=0:GP5=0;
	
	
	grade_points=(GP1*cred1)+(GP2*cred2)+(GP3*cred3)+(GP4*cred4)+(GP5*cred5); 
	total_credits=cred1+cred2+cred3+cred4+cred5;
	GPA=grade_points/total_credits;               //Finding GPA by formula
	cout<<"Your GPA is  "<<GPA;                   //display GPA
	
	// using ternary operator to display congratulations and warning meassages according to GPA
	
	(GPA==4.00)?cout<<"\nCongratulations your name is placed in rector's list of honour":cout<<"";
	(GPA>=3.50 && GPA<4.00)?cout<<"\nCongartulations your name is placed in Dean's list of honour":cout<<"";
	(GPA<2.00)?cout<<"\nYour name is placed in warning list":cout<<"";
	return 0;
}
