#include<iostream>
using namespace std;
class nodes{
	public:
		int data;
		nodes *next;
		
};
class singly:public nodes{
	public:
		nodes *head;
		singly()
		{
			head=NULL;
		}
		void insert_at_head(int x){
			nodes *newnode=new singly();
			newnode->data=x;
			newnode->next=head;
			head=newnode;
		}
		
		void showData()
		{
			nodes *h=head;
			while(h!=NULL)
			{
				cout<<h->data<<" "<<"\n";
				h=h->next;
			}
		}
		//function to return the length
		int recursiveLength(nodes *h)
		{
		 	static int length=1;
		 	if(h->next==NULL)
		 	{
		 		return length;
			 }
			 else
			 {
			 	length++;//increament of length
			 	recursiveLength(h->next);//recursive call
			 }
		}
};

main()
{
	singly *s=new singly();
	s->insert_at_head(1);
	s->insert_at_head(2);
	s->insert_at_head(3);
	
	s->insert_at_head(3);
	
	s->insert_at_head(3);
	
	s->insert_at_head(3);
	s->showData();
	cout<<"\n";
	cout<<s->recursiveLength(s->head);//calling of function
}
