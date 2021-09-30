/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        
        int length = 0;
        ListNode currlen = head;
        
        while(currlen != null){
            currlen = currlen.next;
            length++;
        }
        
        if(k<1 || length<2){
            return head;
        }
        
        k = k%length;
        if(k<1){
            return head;
        }
        
        k = length-k;
        
        int len = 0;
        ListNode curr = head;
        
        while(len<k-1){
            curr = curr.next;
            len++;
        }
        ListNode curr2 = curr.next;
        curr.next = null;
        
        ListNode curr3 = curr2;
        while(curr3.next!=null){
            curr3 = curr3.next;
        }
        curr3.next = head;
        
        return curr2;
    }
}
