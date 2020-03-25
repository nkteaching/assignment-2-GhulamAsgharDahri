
#include<iostream>
using namespace std; 
  
// recursive function 
int product(int x,int y) 
{  
    if(x<y)
	{
		
        return product(y, x);//swaping to avoid error in subtracting the number 
  
	 } 
    else if (y!=0)
    {
  		//recursive call  	 
        return(x+product(x,y-1)); 
  
	}
    else
    {
       return 0; 

	}
} 
  
// Driver Code 
int main() 
{ 
    int x=6,y=2; 
    cout<<product(x, y); 
     
}
