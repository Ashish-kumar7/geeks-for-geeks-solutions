Node* reverseDLL(Node * head){
    Node *curr;
    while(head!=NULL){
        curr = head ; 
        head = head->next;
        curr->next = curr->prev; 
        curr->prev = head; 
        }
        head = curr;
    return head;
}