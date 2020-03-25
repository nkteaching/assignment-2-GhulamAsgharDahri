#include<iostream>

using namespace std;
#include<string.h>
#define N 4

class dsa2d{
	public:
//		int **maze;
		int **solution;
		
		dsa2d()
		{
			solution=NULL;
		}
		int maze[N][N]={ { 1, 1, 1, 1 }, 
                      { 0, 0, 0, 1 }, 
                      { 0, 0, 0, 1 }, 
                      { 0, 0, 0, 1 } }; 
		dsa2d(int n)
		{
			/*this is initialization of array */
//			this->=n;
			solution=new int*[N];
			for(int i=0;i<N;i++)
			{
				solution[i]=new int[N];
				memset(solution[i],0,sizeof(int)*N);
			}
				
		}
		//function to print the board after solution
		void displayMap()
		{
			
			for(int i=0;i<N;i++)
			{
				for(int j=0;j<N;j++)
				{
					cout<<maze[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		bool validity(int x,int y)
		{
			//checking the value of map that if it contains 1
			if(x>=0 && x<N && y>=0 && y<N && maze[x][y]==1)
			{
				return true;//if contains 1 return true
			}
			return false;//else false
		}
		bool solution1(int x,int y)
		{
			if(x==N-1 && y==N-1)//checking if map has been done(completed)
			{
				solution[x][y]=1;
				return true;
			}
			if(validity(x,y)==true)//checking if the map is in right bound;
			{
				solution[x][y]=1;//if yes then place 1
				if(solution1(x+1,y)==true)//traversing along x axes
				{
					return true;
				}
				if(solution1(x,y+1)==true)//traversing along y axes
				{
					return true;
				}
				solution[x][y]=0;//if in x asxes and y axes path doesnot found then place 0
				return false;
				
			}
			return false;
		}
		bool solutionSetUp()
		{
			if(solution1(0,0)==false)
			{
				cout<<"No Path";
				return false;
			}
			displaySolution();
			return true;
		}
		void displaySolution()
		{
				for(int i=0;i<N;i++)
			{
				for(int j=0;j<N;j++)
				{
					cout<<solution[i][j]<<" ";
				}
				cout<<"\n";
			}
		}

};
main()
{
	dsa2d d1(5);
		cout<<"\nMAZE MAP: \n";
	d1.displayMap();
	cout<<"\nsolution: \n";
	d1.solutionSetUp();
}
