Node *rearrangeEvenOdd(Node *head)
{
    if(head==NULL || head->next==NULL || head->next->next==NULL){
    return head;
}
else{
    Node *odd=head;
    Node *even=head->next;
    Node *evenHead=even;
    while(even!=NULL && even->next!=NULL){
    odd->next=even->next; 
    odd=even->next; 
    even->next=odd->next;
    even=odd->next;
}
odd->next=evenHead;
return head;
}
}