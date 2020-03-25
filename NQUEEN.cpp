#include<iostream>
using namespace std;
#include<string.h>
class dsa2d{
	public:
		int **board;
		int n;
		dsa2d()
		{
			board=NULL;
		}
		dsa2d(int n)
		{
			/*this is initialization of array */
			this->n=n;
			board=new int*[n];
			for(int i=0;i<n;i++)
			{
				board[i]=new int[n];
				memset(board[i],0,sizeof(int)*n);
			}
			
			
		}
		//function to print the board after solution
		void displayBoard()
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<board[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		 bool validity(int row,int col)
		 {
		 	//condition to check queen
		 	for(int i=0;i<col;i++)
		 	{
		 		if(board[row][i])
		 		{
		 			return false;
				 }
			 }
			 //queen can run diagonally therefore checking upper diagonals
			 for(int i=row,j=col;i>=0 && j>=0;i--,j--)
			 {
			 	if(board[i][j])
			 	{
			 		return false;
				 }
			 }
			  //queen can run diagonally therefore checking upper diagonals
			 
			 for(int i=row,j=col;i<n && j>=0;i++,j--)
			 {
			 	if(board[i][j])
			 	{
			 		return false;
				 }
			 }
			 return true;
			 
		 }
		 
		 bool solution(int col)
		 {
		 	if(col>=n)//this is when col is equal to size meaning that solution has been done
		 	{
		 		return true;
			 }
			
			
			 for(int i=0;i<n;i++)
			 {
			 	if(validity(i,col))//checking the conditions that can queen be placed
			 	{
			 		board[i][col]=1;//if yes then place
			 		
			 		if(solution(col+1))//recursive call to do this again
			 		{
			 			return true;
					 }
				 }
				
				 board[i][col]=0;//other wise place 0
				 
			 }
			 return false;
		 }
		 
		 bool solutionSetUp()
		 {
		 	//this is to initiallize board with 0
		 	for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					board[i][j]=0;
				}
			}
			// this is incase solution does not found 
			if(solution(0)==false)
			{
				cout<<"No solution";
				return false;
			}
			displayBoard();
			
		 }
	
};
main()
{
	dsa2d d1(4);
//	d1.display();
	d1.solutionSetUp();

}
