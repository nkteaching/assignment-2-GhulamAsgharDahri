#include<iostream>
using namespace std;
struct stackData{//i have use structure to hold mulitple data like float and structure within structre can be used
// to hold structure data type
	int x;
	float age;
};
int size=5;
class st{
	public:
		//rest of the functions are doing same kind of purpose
		int top;
		
		struct stackData sd[5];
		st(int s)
		{
			size=s;
			top=-1;
		
		}
		bool isEmpty()
		{
			if(top==-1)
			{
				return true;
			}
			else{
				return false;
			}
		}
		bool isFull()
		{
			if(size-1==top)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void push(float a,int x)
		{
			if(!isFull())
			{
				top++;
				sd[top].x=x;
				sd[top].age=a;
				
	
			}
			else{
				cout<<"stack is full";
			}
		}
		int pop()
		{
			if(!isEmpty())
			{
				int temp=sd[top].x;
				
				int temp2=sd[top].age;	
				sd[top].age=0;
				sd[top].x=0;
				
				
				top--;
				return temp;
			}
			else{
				cout<<"can not pop as stack is empty !";
			}
		}
		void display()
		{
			for(int i=top;i>=0;i--)
			{
			 	cout<<sd[i].x<<"age: "<<sd[i].age<<endl;
			}
		}
		
		
};
main()
{
	
}
