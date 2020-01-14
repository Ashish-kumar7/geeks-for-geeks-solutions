
int intersectPoint(Node* head1, Node* head2){
    Node * current1=head1;
    int length1=0;
    while(current1!=NULL){
        length1++;
        current1=current1->next;
    }
    Node * current2=head2;
    int length2=0;
    while(current2!=NULL){
        length2++;
        current2=current2->next;
    }  
    if(current1!=current2){
        return 0;
    }
    Node * current3;
    Node* current4;
    int diff;
    if(length1>=length2){
        current3=head1;
        diff=length1-length2;
        current4=head2;
    }
    else {
        diff=length2-length1;
        current3=head2;
        current4=head1;
    }
    while(diff>0){
        current3=current3->next;
        diff--;
    } 
   while(current3!=current4){
        current3=current3->next;
        current4=current4->next;
    }
    int p=current3->data;
    return p;
}
