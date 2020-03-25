#include<iostream>
using namespace std;

void putcomma(int n) {
    if(n<1000)//if number is less than 4 digit then only number will be printed
	{
        cout<<n;
        return;
    }
    putcomma(n/1000);//recursive call
	cout<<","<<n%1000;//print comma
}

void printcomma(int n)
{
    if(n<0)
	{
        cout<<"-";//print - if there is negeative number
        n=-n;
    }
    putcomma(n);
}
main()
{
	printcomma(1234567);
}
