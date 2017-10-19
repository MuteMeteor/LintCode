/**
 * Given a linked list, remove the nth node from the end of list and return its head.
 * Example
 * Given linked list: 1->2->3->4->5->null, and n = 2.
 * After removing the second node from the end, the linked list becomes 1->2->3->5->null.
 */


/**
 * Definition for ListNode.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int val) {
 *         this.val = val;
 *         this.next = null;
 *     }
 * }
 */

public class Solution {
    /**
     * @param head: The first node of linked list.
     * @param n: An integer.
     * @return: The head of linked list.
     */
    ListNode removeNthFromEnd(ListNode head, int n) {
        // write your code here
        ListNode fakehead = new ListNode(0);
        fakehead.next = head;
        ListNode p1 = fakehead;
        for(int i = 0; i < n + 1; i++)
            p1 = p1.next;
 
        ListNode p2 = fakehead;
 
        while(p1 != null){
            p1 = p1.next;
            p2 = p2.next;
        }
 
        p2.next = p2.next.next;
 
        return fakehead.next;
    }
}