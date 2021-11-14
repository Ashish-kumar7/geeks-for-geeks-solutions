class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
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
};