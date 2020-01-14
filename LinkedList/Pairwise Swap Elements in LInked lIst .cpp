
Node* pairWiseSwap(struct Node* head){
   if(head==NULL && head->next==NULL){
       return head;
   }
   Node *current1=head;
   Node *current2=head->next;
   while(current1!=NULL && current2!=NULL){
       int temp=current1->data;
       current1->data=current2->data;
       current2->data=temp;
       if(current1->next->next!=NULL && current2->next!=NULL && current2->next->next!=NULL ){
       current1=current1->next->next;
       current2=current2->next->next;
       }
       else if(current1->next->next==NULL ){
           current2=current2->next;
       }
       else if(current2->next->next==NULL &&  current1->next->next!=NULL){
           current2=current2->next->next;
       }
   }
   return head;
}
