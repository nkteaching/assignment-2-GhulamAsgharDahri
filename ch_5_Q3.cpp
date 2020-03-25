#include<iostream>
using namespace std;
void reverse() 
{
	int ch;
	cin.get(ch);
	if (ch != '\n')
		reverse();
	cout.put(ch);
}
main()
{
	reverse();
	//NO OUTPUT WILL BE SHOWN due to  error	
}	
