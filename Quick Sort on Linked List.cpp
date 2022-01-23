struct node* parti(struct node* head,struct node* tail){
    struct node* pvt = head, *curr = head->next, *prev= head;
    while(curr!=tail->next){
        if(pvt->data > curr->data){
            swap(prev->next->data,curr->data);
            prev = prev->next;
        }
        curr = curr->next;
    }
    swap(pvt->data,prev->data);
    return prev;
}

void solve(struct node* head,struct node* tail){
    if(!head || !tail || head==tail) return;
    struct node* pvt = parti(head,tail);
    solve(head,pvt);
    solve(pvt->next,tail);
}

void quickSort(struct node **head) {
    struct node* tail = *head;
    while(tail->next)
        tail = tail->next;
    solve(*head,tail);
}