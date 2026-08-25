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

        if(head->next == NULL && n == 1){
            return NULL;
        }

        int count = 0;

        ListNode* temp = head;

        while(temp){
            count++;
            temp = temp->next;
        }

        if(count == n){
            if(head->next == NULL) return NULL;
            else {
                head = head->next;
                return head;
            }
        }


        temp = head;

        for(int i = 0 ; i < (count - n) - 1; i++){
            temp = temp->next;
        }

        if(temp->next && temp->next->next) {
            temp->next = temp->next->next;
        }

        else{
            temp->next = NULL;
        }

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna