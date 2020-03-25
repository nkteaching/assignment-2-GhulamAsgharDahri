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
//				cout<<"stack is full";
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
//				cout<<"can not pop as stack is empty !";
			}
		}
		void display()
		{
			for(int i=top;i>=0;i--)
			{
			 	cout<<a[i]<<endl;
			}
		}
		
		int reverseStack(st &otherStack)
		{
		
			for(int k=1;k<=size;k++)
			{
				int top_element=pop();
				for(int i=0;i<size-k;i++)
				{
					int x=pop();
					otherStack.push(x);	
				}
				push(top_element);
				for(int i=0;i<size;i++)
				{
					push(otherStack.pop());		
				}
			}
			cout<<"\n\n\n\n";
			
		
		}
};


main()
{
	cout<<"stack:\n";
	st s(4);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	s.display();
	cout<<"\n";
	cout<<"\n";
	
	st s1(4);
	
	
//	s.pop();
	s.reverseStack(s1);
	cout<<"stackReversed: \n";
	s.display();
}


