//C++ code to find middle of a linked list
// Use two pointers slow and fast , and move fast twice the steps of slow.
// As soon as fast reaches the last node , the slow is always at the middle element.

 int getMiddle(Node* head) {
    Node* slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
        {
        slow=slow->next;
        fast=fast->next->next;
        }
        return slow->data;   
    }
