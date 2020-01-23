Node* deleteAllOccurances(Node *head,int x)
{
    //Your code here
    Node * current=head;
    Node * prev;
    if(current!=NULL && current->data ==x ){
        head=current->next;
        delete(current);
    }
    while(current!=NULL){
        if(current->data == x){
           prev->next =current->next;
            delete(current);
           current=current->next;
        }
        else 
        {
            prev=current;
            current=current->next;
        }
    }
    return head;
}
