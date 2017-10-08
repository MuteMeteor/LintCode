/*
 * Given a linked list and a value x,
 * partition it such that all nodes less than x come before nodes greater than or equal to x.
 * You should preserve the original relative order of the nodes in each of the two partitions.
 * Example
 * Given 1->4->3->2->5->2->null and x = 3,
 * return 1->2->2->4->3->5->null.
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
     * @param x: an integer
     * @return: a ListNode
     */
    public ListNode partition(ListNode head, int x) {
        // write your code here
 
        if(head == null || head.next == null)
            return head;
 
        ListNode fakehead1 = new ListNode(0);
        ListNode fakehead2 = new ListNode(0);
        ListNode p1 = fakehead1;
        ListNode p2 = fakehead2;
        ListNode p = head;
 
        while(p != null){
            if(p.val < x){
                p1.next = new ListNode(p.val);
                p1 = p1.next;
            }
            else{
                p2.next = new ListNode(p.val);
                p2 = p2.next;
            }
            p = p.next;
        }
        p1.next = fakehead2.next;
 
        return fakehead1.next;
    }
}