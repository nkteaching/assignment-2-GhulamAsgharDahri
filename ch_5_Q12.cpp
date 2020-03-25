#include<iostream>
using namespace std;
void printcube(int n)
{
	if(n!=0)
	{
		
		cout<<n*n*n<<" \n";
		printcube(n-1);//recursive call
	}
	else
	{
		exit(0);
	}
}
main()
{
	
	printcube(5);
}
