#include<iostream>
#include<string>
using namespace std;
int main()
{
	bool check=1;
	string s="I am Pakistani and I love Pakistan and Pa is my love  ";
	string find="Pak";
	string Replace="Afghan";
	string New;
	int length=0;
	while(s[length]!='\0')
	{
		length++;
	}
	cout<<s<<endl;
	
	for(int i=0;i<length;i++)
	{ 
	check=1;
		
		if(s[i]==find[0])
		{
			for(int k=i, p=0;k<i+3;k++)
			{
				if(s[k]!=find[p])
				check=0;
				p++;
			}
			if(check==1)
			{
			New=New+Replace;
			i=i+3;
		}
	}
		New=New+s[i]; 
	}
	cout<<New;
}
