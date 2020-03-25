#include<iostream>
using namespace std;
////Q5--A
int print(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		if(n%2==1)
		{
			cout<<n<<" ";
			
		}
		print(n-1);//tail recursive call
	}
}
//Q5--b
int print2(int n)
{
	if(n==0)
	{
		return -1;
	}
	print(n-1);//non tail recursive call
	if(n%2==1)
	{	
		cout<<n<<" ";
	}
	
}
main()
{
	print2(8);
}
