class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       
       if(findLength(l1)>=findLength(l2))
           {findSum(l1, l2); return l1;}
        else
           {findSum(l2, l1); return l2;}
    }
    
    int findLength(ListNode *l)
    {
        int cnt =0;
        while(l) {
            cnt++; l = l->next;
        }
        return cnt;
    }
    
   void findSum(ListNode *l1, ListNode *l2)
    {
        int carry =0;
       ListNode *prev = l1;
         while(l1 && l2)
        {
            int sum = l1->val + l2->val + carry;
            carry = sum/10;
            sum%=10;
            l1->val = sum;
            prev =l1;
            l1 = l1->next;    l2= l2->next;
        }
        
        while(l1)
        {
            int sum = l1->val +carry;
            carry = sum/10;
            sum%=10;
            l1->val = sum;
            prev = l1;
           l1 = l1->next;
        }
        
        while(l2)
        {
            ListNode * m = new ListNode(l2->val + carry);
            l1->next = m;
            prev =l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if(carry)
        {
           ListNode * m = new ListNode( carry);
            prev->next = m; 
        }
    }
};
