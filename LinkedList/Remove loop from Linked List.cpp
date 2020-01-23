void remove(Node* loop_node,Node* head){
    Node *ptr1;
    Node * ptr2;
    ptr1=head;
    while(1){
    ptr2=loop_node;
    while(ptr2->next!=loop_node && ptr2->next!=ptr1){
        ptr2=ptr2->next;
    }
    if(ptr2->next==ptr1){
        break;
    }
    ptr1=ptr1->next;
    }
    ptr2->next=NULL;
}
int removingtheloop(Node *head){
    Node * slow=head;
     Node * fast=head;
     while(slow!=NULL && fast!=NULL && fast->next!=NULL){
         slow=slow->next;
         fast=fast->next->next;
         if(slow==fast){
             remove(slow,head);
             return 1 ;
         }
     }
     return 0;
}
void removeTheLoop(Node *head){
     removingtheloop(head);
     return;
}