Node* deleteNode(Node *head,int x){
    Node * start=head;
    int count=0;
    while(start!=NULL){
        start=start->next;
        count++;
    }
    if(x>count){
        return NULL;
    }
    if(x==count){
        Node * begin1=head;
        Node * point1=NULL;
        for(int i=1;i<x;i++){
            point1=begin1;
           begin1=begin1->next; 
    }
    point1->next=NULL;
    return head;
        
    }
    if(x==1){
        return head->next;
    }
    Node * begin=head;
    Node * point=head;
    for(int i=1;i<x;i++){
        point=begin;
       begin=begin->next; 
    }
    point->next=begin->next;
    return head;
}