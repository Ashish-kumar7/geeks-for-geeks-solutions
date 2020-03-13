int intersectPoint(Node* head1, Node* head2){
    // Your Code Here
    Node * current1=head1;
    Node * current2=head2;
    int length1=0;
    int length2=0;
    while(current1!=NULL){
        length1++;
        current1=current1->next;
    }
        while(current2!=NULL){
        length2++;
        current2=current2->next;
    }
    Node * current3;
    Node * current4;
    int diff;
    if(length1>=length2){
        current3=head1;
        current4=head2;
        diff=length1-length2;
    }
    else if(length1<length2){
        current3=head2;
        current4=head1;
        diff=length2-length1;
    }
    while(current3!=NULL && diff--){
        current3=current3->next;
    }
    while(current3!=NULL && current4!=NULL && current3!=current4){
        current3=current3->next;
        current4=current4->next;
    }
    return (current3->data);
}
