Node * swapping (Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node * curr=head;
    Node * Next=head->next;
    head=head->next->next;
    Next->next=curr;
    curr->next=swapping(head);
    return Next;
}
Node* pairWiseSwap(struct Node* head) {
    // The task is to complete this method
  return swapping(head);
}