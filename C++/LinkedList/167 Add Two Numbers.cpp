/**
 * You have two numbers represented by a linked list, 
 * where each node contains a single digit. 
 * The digits are stored in reverse order, 
 * such that the 1's digit is at the head of the list. 
 * Write a function that adds the two numbers and returns the sum as a linked list.
 * Example
 * Given 7->1->6 + 5->9->2. That is, 617 + 295.
 * Return 2->1->9. That is 912.
 * Given 3->1->5 and 5->9->2, return 8->0->8.
 */


/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;      
 *     }
 * }
 */


 public class Solution {
    /**
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2
     */
    public ListNode addLists(ListNode l1, ListNode l2) {
        // write your code here
        if(l1 == null)
            return l2;
        if(l2 == null)
            return l1;
 
        ListNode fakehead = new ListNode(0);
        ListNode p = fakehead;
        ListNode p1 = l1;
        ListNode p2 = l2;
        int carry = 0;
 
        while(p1 != null || p2 != null){
            int num1 = 0;
            if(p1 != null){
                num1 = p1.val;
                p1 = p1.next;
            }
 
            int num2 = 0;
            if(p2 != null){
                num2 = p2.val;
                p2 = p2.next;
            }
 
            int temp = (num1 + num2 + carry) % 10;
            p.next = new ListNode(temp);
            p = p.next;
 
            carry = (num1 + num2 + carry) / 10;
        }
 
        if(carry == 1)
            p.next = new ListNode(1);
 
        return fakehead.next;
    }
}