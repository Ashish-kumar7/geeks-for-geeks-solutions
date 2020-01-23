
Node* reverse(Node * head) { 
        if(head==NULL){
            return NULL;
        }
        Node* current = head; 
        Node *prev = NULL, *next = NULL; 
        while (current != NULL) { 
            next = current->next; 
            current->next = prev; 
            prev = current; 
            current = next; 
        } 
        head = prev; 
        return head;
    } 
void rearrange(struct Node *odd){
    Node * a=odd;
    Node * b=a->next;
    Node * evenhead=b;
    while(a!=NULL && a->next!=NULL  && a->next->next!=NULL){
       a->next=a->next->next;
       b->next=b->next->next;
       a=a->next;
       b=b->next;
    }
    Node * m;
    m=reverse(evenhead);
    a->next=m;
    }