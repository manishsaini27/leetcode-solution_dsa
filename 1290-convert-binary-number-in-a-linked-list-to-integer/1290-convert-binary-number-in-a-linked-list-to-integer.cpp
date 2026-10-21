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
    int getDecimalValue(ListNode* head) {
        ListNode* temp  = head;
        int length = 0;
        while(temp != NULL) {
            length++;
            temp = temp->next;
        }
        int sum = 0;
        temp =  head;
        while(temp !=NULL) {
            int value = temp->val*pow(2,--length);
            sum = sum + value;
            temp = temp->next;
        }
        return sum;
    }
};