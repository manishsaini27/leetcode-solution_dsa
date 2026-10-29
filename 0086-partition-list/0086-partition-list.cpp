
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* low = new ListNode(0);
        ListNode* tempLow = low;
        ListNode* high = new ListNode(0);
        ListNode* temphigh = high;
        while(temp != NULL){
            if(temp->val < x){
                tempLow->next = temp;
                temp = temp->next;
                tempLow = tempLow->next;
            }else{
                temphigh->next = temp;
                temp = temp->next;
                temphigh = temphigh->next;
            }

            // yha tak temphigh high ke last node per aa chuka hai 
            // aut tempLow bhi apne low ke last node per aa chuka hai 
           
        }
        tempLow->next = high->next;  // so we connect the low list woth the high list using this 
        temphigh->next = NULL;    // now the last node of the list is high so we change the last node next to NULL...
        return low->next;
    }
};