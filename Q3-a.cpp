#include<iostream>
using namespace std;
class st{
	public:
		int top;
		int size;
//		int *stack;
		int *a;
		st(int sizeOfStack)
		{
			top=-1;
			size=sizeOfStack;
			a=new int [size];
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
		void push(int x)
		{
			if(!isFull())
			{
				top++;
				a[top]=x;
	
			}
			else{
				cout<<"stack is full";
			}
		}
		int pop()
		{
			if(!isEmpty())
			{
				int temp=a[top];	
				a[top]=0;
				
				top--;
				return temp;
			}
			else{
				cout<<"can not pop as stack is empty !";
			}
		}
		void display()
		{
			for(int i=0;i<=top;i++)
			{
			 	cout<<a[i]<<endl;
			}
		}
		
		int reverseStack(st &otherStack,st &otherStack2)
		{
		
			for(int i=0;i<size;i++)
			{
				otherStack.push(pop());
			}
			
			for(int i=0;i<size;i++)
			{
				otherStack2.push(otherStack.pop());
			}
			
		
		}
};

main()
{
	cout<<"stack:\n";
	st s(5);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.display();
	cout<<"\n";
	cout<<"\n";
	
	st s1(5);
	
	st s2(5);
	
	
	s.reverseStack(s1,s2);
	cout<<"stackReversed: \n";
	s.display();
}


