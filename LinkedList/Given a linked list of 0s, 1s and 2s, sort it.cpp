Node* segregate(Node *head) {
    Node * head1=head;
    Node * head2=head;
    int count1=0;
    int count2=0;
    int count3=0;
    
    while(head1!=NULL ){
        if(head1->data==0){
            count1++;
            head1=head1->next;
        }
        else if(head1->data==1){
            count2++;
            head1=head1->next;
            
        }
        else if(head1->data==2){
            count3++;
            head1=head1->next;
            
        }
    }
        while(head2!=NULL && count1--){
            head2->data=0;
            head2=head2->next;
        }
        while(head2!=NULL && count2--){
            head2->data=1;
            head2=head2->next;
            
        }
            while(head2!=NULL && count3--){
            head2->data=2;
            head2=head2->next;
            }
    return head;
}