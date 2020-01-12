Node * reverse_the_linked_list(Node * head ){
    Node* current=head;
    Node * next=NULL;
    Node* prev=NULL;
    while (current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
Node *addingone(Node*head){
    Node*temp=head;
    Node * store=temp;
   while(temp!=NULL){
      if(temp->data!=9){
           temp->data=(temp->data)+1;
           return store;
       }
       if(temp->data==9 && temp->next!=NULL){
           temp->data=0;
           temp=temp->next;
       }
       if(temp->data==9 && temp->next==NULL){
           temp->data=0;
           Node* newnode=new Node();
           newnode->data=1;
           temp->next=newnode;
           return store;
       }
   }
     return store;
}
Node *addOne(Node *head){
   Node * current =head;
   Node *temp1=reverse_the_linked_list(current);
   Node * temp2=addingone(temp1);
   Node * temp3=reverse_the_linked_list(temp2);
   return temp3;
}