#include<iostream>
using namespace std;
#include<string>


void b(string s,char ch)
{
	static int count=0;
	static int i=s.length()-1;
	if(i==-1)
	{
		cout<<"count: "<<count;
		exit(0);
	}
	if(s[i]==ch)
	{
	
		count++;//counting the occurance
	}
	i--;
	b(s,ch);//recursive call
}
void a(string s,char ch)
{
	static int i=s.length()-1;
	if(s[i]==ch)
	{
		cout<<"found at "<<i;//existance of ccharacter;
		exit(0);
	}

	
	i--;
	a(s,ch);//recursive call
}
void c(string s,char ch)
{
	static int count=0;
	static int i=s.length()-1;
//	static string s;
	if(i==-1)
	{
		cout<<s;
		exit(0);
	}
	if(s[i]==ch)
	{
		s[i]='\0';//wherethere element found null be overrided
	}

	
	i--;
	c(s,ch);//recursive call
}
main()
{
	b("asghar",'a');
}
