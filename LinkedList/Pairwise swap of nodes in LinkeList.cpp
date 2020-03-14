struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node * p;
    p=head;
    Node * y=p->next;
    Node *q;
    Node *temp;
    while(1){
        q=p->next;
        temp=q->next;
        q->next=p;
        if(temp==NULL || temp->next==NULL)
        {
        p->next=temp;
        break;
        }
        p->next=temp->next;
        p=temp;
    }
    return y;
}
