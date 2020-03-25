#include<iostream>
using namespace std;

//ch is not taking any value and it is assigned NULL so function will never stop recursion
void reverse() 
{
	char ch;
	cin.get(ch);
	if (ch != '\n')
		reverse();
	cout.put(ch);
}
main()
{
	reverse();
	//NO OUTPUT WILL BE SHOWN 
		
}	
