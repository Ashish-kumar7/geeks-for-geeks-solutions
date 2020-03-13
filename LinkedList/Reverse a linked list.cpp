Node* reverseList(Node *head)
{
  // Your code 
  
  Node * curr=head;
  Node * prev=NULL;
  Node * next=NULL;
  
  while(curr!=NULL)
  {
      next=curr->next;
      curr->next=prev;
      prev=curr;
      curr=next;
  }
  
  head=prev;
  return head;
}

