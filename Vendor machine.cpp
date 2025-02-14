#include<iostream>
using namespace std;
int main()
{
int prod;
int snack1=0,snack2=0,drink1=0,drink2=0;
double dollars,price=0;
int method;
cout<<"Vending Machine Menu:\nPress -1 to end shopping \n1. Snack A-$1.50\n2. Snack B-$2.00\n3. Drink A-$1.00\n4. Drink B-$1.25\n";
while(prod!=-1)
{
cout<<"Enter the product u want : ";
cin>>prod;
switch(prod)
{
case 1:
snack1+=1;
switch(prod){
case 1:
price+=1.50;
break;
case 2:
price+=2.00;
break;
case 3:
price+=1.00;
break;
case 4:
price+=1.25;
break;
}
break;
case 2:
snack2+=1;
switch(prod){
case 1:
price+=1.50;
break;
case 2:
price+=2.00;
break;
case 3:
price+=1.00;
break;
case 4:
price+=1.25;
break;
}
break;
case 3:
drink1+=1;
switch(prod){
case 1:
price+=1.50;
break;
case 2:
price+=2.00;
break;
case 3:
price+=1.00;
break;
case 4:
price+=1.25;
break;
}
break;
case 4:
drink2+=1;
switch(prod){
case 1:
price+=1.50;
break;
case 2:
price+=2.00;
break;
case 3:
price+=1.00;
break;
case 4:
price+=1.25;
break;
}
break;
default:
if(prod==-1){
cout<<" ";
break;
}
if(prod>4 || prod<1)
{
cout<<"invalid Please try again";
goto end;
}}
}
cout<<"\nDo you want to use cash(1) or credit card(0) : ";
cin>>method;
while(method!=0 && method!=1)
{
cout<<"Invalid \nDo you want to use cash(1) or credit card(0) : ";
cin>>method;
}cout<<"\nprice before discounts is :  "<<price;
if((snack1>0||snack2>0) && (drink1>0|| drink2>0))
price=price-price*0.05;
if(snack1>0 && snack2>0 && drink1>0 && drink2>0)
price=price-price*0.10;
cout<<"\nPrice after discount is : "<<price;
switch(method)
{
case 1:
cout<<"\nEnter amount in dollars : ";
cin>>dollars;
if(dollars<price)
cout<<"\ninsuficient money";
else
cout<<"change is : "<<dollars-price;
break;
case 0:
cout<<"\ncard payment successful";
break;
end:
cout<<" ";
}

}
