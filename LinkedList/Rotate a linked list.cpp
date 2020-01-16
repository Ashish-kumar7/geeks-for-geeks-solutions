Node* rotate(Node* head, int k) {
    // Your code here
    Node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node * end=NULL;
    temp->next=head;
    while(k--){
        end=head;
        head=head->next;
    }
    end->next=NULL;
    return head;
}