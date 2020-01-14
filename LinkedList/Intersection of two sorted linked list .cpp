Node * intersect(Node* head1,Node * head2){
    if(head1==NULL || head2==NULL){
        return NULL ;
    }
    if(head1->val<head2->val){
        return intersect(head1->next,head2);
    }
    if(head1->val>head2->val){
       return intersect(head1,head2->next);
    }
    Node * temp=new Node(head1->val);
    temp->next=intersect(head1->next,head2->next);
    return temp;
}
void intersection(Node **head1, Node **head2,Node **head3)
{
    Node* head11=*head1;
    Node * head22=*head2;
   Node * p= intersect(head11,head22);
    *head3=p;
}
