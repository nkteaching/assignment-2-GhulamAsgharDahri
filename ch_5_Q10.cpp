#include <iostream>
using namespace std;
float recursive(int n,float d)
{
	static float sum=0;
	static int counter=0;
    if (counter<n)
	{
        if(counter!=0 && counter%2==0) 
		{
			counter++;
			sum=sum-(1/d);
            recursive(n,d+1);//recursive call if even
        } else 
		{
			counter++;
			sum=sum+(1/d);//recursive call if odd
            recursive(n,d+1);
        }
    } 
	else
	{
		return sum;	
	 } 
}

int main() {
    int n = 5;
    cout << recursive(n, 1);
}
