#include<iostream>
using namespace std;
#include<string.h>
//Q15---A
int f(string w)
{	
	static int i=w.length()-1;
	static string s;
	if(i==-1)//it means stirng has been reversed
	{
		if(s==w)//if reverse of string or word equal then palindromse
		{
			cout<<"palindrom";
		}
		else{
			cout<<s<<"\n";
			cout<<"not the palindrom";
		}
		exit(0);
	}
	s=s+w[i];
	
	i--;
	f(w);
}
//Q15---B
int fsenetece(string w)
{	
	static int i=w.length()-1;
	static string s;
	if(i==-1)//it means stirng has been reversed
	{
		if(s==w)//if reverse of string or word equal then palindromse
		{
			cout<<"palindrom";
		}
		else{
			cout<<s<<"\n";
			cout<<"not the palindrom";
		}
		exit(0);
	}
	s=s+w[i];
	
	i--;
	fsenetece(w);
}
main()
{
	f("asghar");
}

