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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr !=NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
        } 
        return prev;

    }
    bool isPalindrome(ListNode* head) {
        //if the first half and second half are reverse of each other then LL is plaindrome...
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next !=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newhead = reverseList(slow->next);
        ListNode* a = head;
        ListNode* b = newhead;
        while(b!=NULL) {
            if(a->val != b->val ) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};