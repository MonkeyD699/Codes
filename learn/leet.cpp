
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	 node*next;
	node(int data)
	{
		this->data=data;
		next=NULL;
	}
};
class linkedList{
	public:
	node*head;
	linkedList()
	{
		head=NULL;
	}
	
	void reverse()
	{
		node*current=head;
		node*prev=NULL,*next=NULL;
		while(current!=NULL){
			next=current->next;
			current->next=prev;
			prev=current;
			current=next;
		}
		head=prev;
		
	}
	void print()
	{
		struct node*temp=head;
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
			
		}
	}
		
		void push(int data)
		{
			node*temp=new node(data);
			temp->next=head;
			head=temp;
		}
		
	};	
		int main()
		{
			linkedList ll;
			ll.push(20);
			ll.push(4);
			ll.push(15);
			ll.push(85);
			cout<<"given linked list is "<<endl;
			ll.print();
			ll.reverse();
			cout<<"reverse list is"<<endl;
			ll.print();
			return 0;
		}
