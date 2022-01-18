Node* addSameSize(Node* head1, Node* head2, int* carry) 
{ 
	// Your code here
	if(head1==NULL) return NULL;
    
    int sum;
    
    Node *result=new Node(sum);
    result->next=addSameSize(head1->next,head2->next,carry);
    
    sum=head1->data+head2->data+*carry;
    *carry=sum/10;
    sum=sum%10;
    
    result->data=sum;
    return result;
} 

//Function to add remaining carry.
void addCarryToRemaining(Node* head1, Node* curr, int* carry, Node** result) 
{ 
	// Your code here
	int sum;
	if(head1!=curr)
	{
	    addCarryToRemaining(head1->next,curr,carry,result);
	    sum=head1->data+*carry;
	   
	    *carry=sum/10;
	     sum=sum%10;
	    
	    push(result,sum);
	    
	}
}