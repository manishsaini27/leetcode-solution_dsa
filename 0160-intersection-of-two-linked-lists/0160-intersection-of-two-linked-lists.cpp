/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = 0;
        ListNode* tempA = headA;
        while(tempA !=NULL) {
            len1++;
            tempA = tempA->next;
        }
        int len2 = 0;
        ListNode* tempB = headB;
        while(tempB !=NULL) {
            len2++;
            tempB = tempB->next;
        }
        tempA = headA;  // because we have  to traverse the linked list for another round; 
        tempB = headB;
        if(len1>len2) {
            int diffA =  len1 - len2;
            for(int i=1;i<=diffA; i++){
                tempA= tempA->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        
        // Now for the second list 
        else{   //(len2 > len1) 
            int diffB = len2- len1;
            for(int i= 1; i<=diffB; i++) {
                tempB = tempB->next;

            }
            while(tempA != tempB) {
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        
    }
};