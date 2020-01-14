
Node *zigZack(Node* head){
 // your code goes here
 bool flag=true;
 Node * current=head;
 while(current->next!=NULL){
     if(flag){
         if(current->data>current->next->data){
             int temp=current->data;
             current->data=current->next->data;
             current->next->data=temp;
         }
     }
     else{
         if(current->data<current->next->data){
             int temp=current->data;
                current->data=current->next->data;
             current->next->data=temp;
        }
     }
     current=current->next;
     flag=!flag;
 }
 return head;
}
