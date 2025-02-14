                                    /*
                                  M.Bilal Tahir
                                  24i-3166
                                  Assignment 2
                                  SE-B
                                  Question 4
                                  */
#include<iostream>
#include<string>
using namespace std;
int main()
{    int counter;  
     bool winner=true;
     bool check1,check2,check3,check4,check5,check6,check7,check8,check9; //used for validating the user to use one box only one time
     check1=check2=check3=check4=check5=check6=check7=check8=check9=true;
     string a="1",b="2",c="3",d="4",e="5",f="6",g="7",h="8",i="9"; // each variable represents the respective box in the tic tac toe table 
     string entry;    //take entries from user where they want to play their move;
	cout<<"This is your Tic Tac Toe game";
	cout<<"\nX is for Player 1 and O is for Player 2"<<endl;
	cout<<"This is your Board for the game\n\n "<< a <<" |"<< b <<"  |" <<c<<"\n___|___|___\n "<<d <<" |" <<e<< "  |" <<f<<"\n___|___|___\n "<<g<< " |" <<h<< "  |" <<i<<"\n   |   |"<<endl;
	for(counter=1;counter<=5;counter++)
	{
		start:
	cout<<"Player X Enter number for your move on the board  ";
	cin>>entry;
	
	/*In tic tac toe we want that one box is assigned a character only one time, so for that in every if condition, a check condition is also checked side
	by side along the entry of user using and operator and if the condition becomes true then the respective check variable will be assigned false in the body
     so that whenever the user inputs the same value again the condition doesn't become true and shows him invalid message*/
	
	if (entry=="1" && check1==true)
{
	a="X";
	check1=false;
}
	else if(entry=="2" && check2==true)
{
		b="X";
		check2=false;
}
	else if(entry=="3" && check3==true)
{
	c="X";
	check3==false;
}	
else if(entry=="4" && check4==true)
{
	d="X";
	check4==false;
}
	else if (entry=="5" && check5==true)
	{
	e="X";
	check5=false;
}
	else if(entry=="6" && check6==true){
	f="X";
	check6=false;
}
	else if(entry=="7" && check7==true)
	{g="X";
	check7=false;}
	else if (entry=="8" && check8==true)
	{
	h="X";
	check8=false;
}
	else if(entry=="9" && check9==true)
	{i="X";
	check9=false;}
	
	else 
	{
	cout<<"Invalid \n";
	goto start;  // if user inputs any other value this will show invalid message and goto start label to ask for input again
	}
	system("CLS");
	cout<<"\n " <<a <<" |"<< b <<"  |" <<c<<"\n___|___|___\n "<<d <<" |" <<e<< "  |" <<f<<"\n___|___|___\n "<<g<< " |" <<h<< "  |" <<i<<"\n   |   |"<<endl;
	if((a==b && a==c) || (d==e && d==f) || (g==h && g==i) || (a==d && a==g ) || (b==e && b==h) || (c==f && c==i) || (a==e && a==i) || (c==e && c==g) && winner==true)   //Checking if X won after every input from Player X
	{cout<<"Player X is the winner ";
	winner=false; //when player X wins, winner is assigned false so after the loop Match drawn is not displayed
	break;}
	else
	cout<<"\nContinue\n";
	if (counter==5) //After 9 entries from the user this condition will become true and loop will break
	break;
	start2:
	cout<<"Player O Enter number for your move on the board  ";
	cin>>entry;
	if (entry=="1" && check1==true)
	{
	a="O";
	check1=false;
}
	else if(entry=="2" && check2==true)
	{
	b="O";
	check2=false;
}
	else if(entry=="3" && check3==true)
	{
	c="O";
	check3=false;
}
	else if(entry=="4" && check4==true)
	{
	d="O";
	check4=false;
}
	else if (entry=="5" && check5==true)
	{
	e="O";
	check5=false;
}
	else if(entry=="6" && check6==true)
	{
	f="O";
	check6=false;
}
	else if(entry=="7" && check7==true)
	{
	g="O";
	check7=false;
}
	else if (entry=="8" && check8==true)
	{
	h="O";
	check8=false;
}
	else if(entry=="9" && check9==true)
	{i="O";
	check9=false;
}
	else 
	{
	cout<<"Invalid \n";
	goto start2; // if user inputs any other value this will show invalid message and goto start2 label to ask for input again
	}
	system("CLS");
	cout<<"\n " <<a <<" |"<< b <<"  |" <<c<<"\n___|___|___\n "<<d <<" |" <<e<< "  |" <<f<<"\n___|___|___\n "<<g<< " |" <<h<< "  |" <<i<<"\n   |   |"<<endl;
	if((a==b && a==c) || (d==e && d==f) || (g==h && g==i) || (a==d && a==g ) || (b==e && b==h) || (c==f && c==i) || (a==e && a==i) || (c==e && c==g) && winner==true) //Checking if O won after every input from player O
	{cout<<"Player O is the winner ";
	winner= false; //when player O wins, winner is assigned false so after the loop Match drawn is not displayed
	break;}
	else
	cout<<"\nContinue\n";
	}
	if(winner==true) // If no one wins then the match is drawn
	cout<<"\nMatch drawn";
	}
