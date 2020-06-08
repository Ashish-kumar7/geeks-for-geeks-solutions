Node *swapkthnode(Node* head, int num, int K){
    if(num<K){
        return NULL;
    }
    if(2*K -1 == num){
        return head;
    }
    int n=num;
    Node * x=head;
    Node * x_prev=NULL;
    for(int i=1;i<K;i++){
        x_prev=x;
        x=x->next;
    }
    Node * y=head;
    Node * y_prev=NULL;
    for(int i=1;i<n-K+1;i++){
        y_prev=y;
        y=y->next;
    }
    if(x_prev){
        x_prev->next=y;
    }
    if(y_prev){
        y_prev->next=x;
    }
    Node * temp=x->next;
    x->next=y->next;
    y->next=temp;
    if (K== 1){
        head = y; 
    }
    if (K == n){
        head = x; 
    }
    return head;
}