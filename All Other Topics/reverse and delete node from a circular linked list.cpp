void deleteNode(struct Node **head, int key){
    Node *start=*head;
     Node * temp=NULL;
     
    while(start!=NULL){
        if(start->data==key){
            temp->next=start->next;
            break;
        }
        temp=start;
        start=start->next;
    }
}
 void reverse(struct Node** head_ref){
    if (*head_ref == NULL) 
        return; 
  
    Node* prev = NULL; 
    Node* current = *head_ref; 
    Node* next; 
    do { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } while (current != (*head_ref)); 
  
    (*head_ref)->next = prev; 
    *head_ref = prev; 
}