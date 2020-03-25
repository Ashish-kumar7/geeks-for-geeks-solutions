void removeTheLoop(Node *head){
     if(head==NULL){
         return ;
     }
     Node * a=head;
     Node * b=head;
     int count=0;
     while(a!=NULL && a->next!=NULL && a->next->next!=NULL && b!=NULL && b->next!=NULL && b->next->next!=NULL){
         a=a->next;
         b=b->next->next;
         if(a==b){  
             count=1;
             break;
         }
     }
     if(count==0){
         return ;
     }
     a=head;
     while((a->next!=b->next)){
         a=a->next;
         b=b->next;
     }
    // cout<<b->data<<" ";
     b->next=NULL;
     return ;
}