#include<iostream>
using namespace std;
char f(int i)
{
	if(i==1) return 'a';//simple function to return character
	else f(i-1);
	
}
main()
{
	cout<<f(4);
}
