Node* addTwoLists(Node* first, Node* second) {
    // Code here
    //here the linked listprovided to us is already reverted
    
    int sum=0;
    int carry=0;
    Node * temp;
    Node * mark=NULL;
    Node * prev;
    int sum1=0;
    while(first!=NULL || second!=NULL){
        sum1=carry+(first!=NULL ? first->data : 0) + (second!=NULL ? second->data : 0);
        sum=sum1%10;
        carry=sum1/10;
        temp= new Node(sum);
        if(mark==NULL){
            mark=temp;
        }
        else {
            prev->next=temp;
        }
        prev=temp;
        if(first!=NULL){
            first=first->next;
        }
        if(second!=NULL){
            second=second->next;
        }
    }
    if(carry>0){
        temp=new Node(carry);
        prev->next=temp;
    }
    return mark;
}