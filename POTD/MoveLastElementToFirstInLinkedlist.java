class MoveLastElementToFirstInLinkedlist{
    class Solution {
        public static Node moveToFront(Node head) {
            if(head == null || head.next == null){
                return head;
            }
            Node temp = head;
            Node prev = null;
            
            while(temp.next != null){
                prev = temp;
                temp = temp.next;
            }
            temp.next = head;
            prev.next = null;
            head = temp;
            return head;
        }
    }
}