Node *copyList(Node *head) {
    // Your code here
    
    Node * curr=head;
    Node * start=head;
    Node * temp;
    
    while(curr!=NULL){
        temp=curr->next;
        curr->next=new Node(curr->data);
        curr->next->next=temp;
        curr=temp;
    }
    
    curr=head;
    
    while(curr){
        if(curr->next){
            curr->next->arb=curr->arb?curr->arb->next:curr->arb;
        }
        curr=curr->next?curr->next->next:curr->next;
    }
    
    Node * original=head;
    Node * copy=head->next;
    
    temp=copy;
    
    while(original && copy){
        original->next= original->next? original->next->next : original->next;
        
        copy->next= copy->next?copy->next->next : copy->next;
        
        original=original->next;
        copy=copy->next;
        
    }
    
   return temp; 
    
    
}