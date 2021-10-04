#include <iostream>
using namespace std;


class Node
{
	public:
		int data;
		Node*next;
};

void print(Node*n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}

void push(Node** head_ref, int new_data)  
{  
    /* 1. allocate node */
    Node* new_node = new Node();  
  
    /* 2. put in the data */
    new_node->data = new_data;  
  
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);  
  
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;  
}  

int main()
{
	Node*h=new Node();
	Node*f=new Node();
	Node*s=new Node();
	
	h->data=1;
	h->next=f;
	
	f->data=2;
	f->next=NULL;
push(&h,3);	
print(h);
	return 0;
}
