/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Initialize both pointers at the head
        ListNode* slow =  head;
        ListNode* fast =  head;
        // Move fast n + 1 steps ahead
        for(int i = 1; i <=n+1;i++){

            // If fast becomes NULL, delete the head node
            if(fast==NULL) return head->next;
            fast = fast->next;
        }

        // Move both pointers at the same speed
        while(fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        // Skip the node that needs to be deleted
        slow->next = slow->next->next;
        
        // Return the updated linked list
        return head;
    }
};