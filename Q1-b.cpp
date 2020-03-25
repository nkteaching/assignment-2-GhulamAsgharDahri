#include<iostream>
using namespace std;


class Q{
	public:
		int top;
		int size;
		int rear;
//		int *stack;
		int *a;
		Q(int sizeOfStack)
		{
			rear=0;
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
				cout<<"Queue is full";
			}
		}
		int  pop()
		{
			if(!isEmpty())
			{
				int temp=a[rear];
				a[rear]=0;
				rear++;
				return temp;
			}
			else{
				cout<<"can not pop as Queue is empty !";
			}
		}
		void display()
		{
			for(int i=rear;i<=top;i++)
			{
			 	cout<<a[i]<<endl;
			}
		}
};
class st:public Q{
	public:
		int top;
		int size;
//		int *stack;
		int *a;
		st(int sizeOfStack):Q(size)
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
		void reverseStack(Q &otherq)
		{
			for(int i=0;i<size;i++)
			{
				int x=pop();
//				cout<<x<<"\n";
				otherq.push(x);
			}
//			otherq.display();
			for(int i=0;i<size;i++)
			{
				push(otherq.pop());
			}
		}
};
main()
{
	st s(5);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.display();
	cout<<"\n\n";

	
	Q q1(5);
	s.reverseStack(q1);
	cout<<"\n\nReversed Stack:\n";
	s.display();
}


