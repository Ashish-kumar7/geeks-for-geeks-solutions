int countNodes(Node *n)  {  
    int res = 1;  
    struct Node *temp = n;  
    while (temp->next != n)  
    {  
        res++;  
        temp = temp->next;  
    }  
    return res;  
} 
int countNodesinLoop(struct Node *head){
    Node * slow=head;
    Node * fast=head;
    
    int flag=0;
    while(fast!=NULL && fast->next!=NULL && slow!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            int x=countNodes(slow);
            return x;
        }
    }
        return 0;
}