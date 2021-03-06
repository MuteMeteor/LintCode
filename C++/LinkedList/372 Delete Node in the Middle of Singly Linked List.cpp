/**
 * Implement an algorithm to delete a node in the middle of a singly linked list, 
 * given only access to that node.
 * Example
 * Linked list is 1->2->3->4, and given node 3, delete the node in place 1->2->4
 */

/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param node: a node in the list should be deleted
     * @return: nothing
     */
    
    void deleteNode(ListNode *node) {
        // write your code here
        if (!node)
            return;
        ListNode *next = node->next;
        if (next) {
            node->val = next->val;
            node->next = next->next;
            delete next;
        } else {
            delete node;
            node = NULL;
        }
    }
};