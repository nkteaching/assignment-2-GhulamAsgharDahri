#include<iostream>
using namespace std;
class st{
	public:
		int top;
		int size;
//		int *stack;
		int *a;
		st()
		{
		}
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
		int peek()
		{
			if(!isEmpty())
			{
					int temp=a[top];
//				a[top]=0;
				return temp;
			}
			else{
				cout<<"can not pop as stack is empty !";
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
		
		st operator==(st &input) 
		{ 
		    st tmpStack(5); 
		  
		    while (!input.isEmpty()) 
		    { 
		        int tmp = input.peek(); 
		        input.pop(); 
		        while (!tmpStack.isEmpty() && tmpStack.peek() < tmp) 
		        { 
		            input.push(tmpStack.peek()); 
		            tmpStack.pop(); 
		        } 
		        tmpStack.push(tmp); 
		    } 
		    return tmpStack; 
		} 
};
main()
{
	st s(5);
	s.push(1);
	s.push(15);
	s.push(3);
	s.push(23);
	s.push(32);
	cout<<"\n";
	st s1(5);
	s1==s;
}




