/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Day8 {
    public ListNode middleNode(ListNode head) {
        
        if(head == null || head.next == null) {
            return head;
        }
        ListNode slow = head;
        ListNode fast = head;
        while(fast != null && fast.next != null) {
            
            slow = slow.next;
            fast = fast.next;
            if(fast.next != null) {
                fast = fast.next;
            }
        }
        return slow;
    }
}