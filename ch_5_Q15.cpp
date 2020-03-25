#include<iostream>
using namespace std;
//have done by hand on hand wriiten assignement
void nonTail(int i) 
{
	if (i > 0) 
	{
		nonTail(i-1);
		cout << i << '';
		nonTail(i-1);
	}
}
void tail(int i) {
	if (i > 0)
	{
		cout << i << '';
		tail(i-1);
	}
}
main()
{
	
}
