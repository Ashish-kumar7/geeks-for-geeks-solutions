bool isPalindrome(Node *head){
    Node * start=head;
    stack<int>S;
    while(start!=NULL){
        S.push(start->data);
        start=start->next;
    }
    while(head!=NULL){
        if(head->data !=S.top()){
            return 0;
        }
        else{
            head=head->next;
            S.pop();
        }
    }
    return 1;
}
