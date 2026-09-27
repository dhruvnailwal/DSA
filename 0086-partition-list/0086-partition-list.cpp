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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy = new ListNode(-1);
        ListNode* ptr = dummy;

        ListNode* temp = head;

        while(temp){

            if(temp->val < x){
                ptr->next = new ListNode(temp->val);
                ptr = ptr->next;
            }

            temp = temp->next;
        }
        
        temp = head;

        while(temp){

            if(temp->val >= x){
                ptr->next = new ListNode(temp->val);
                ptr = ptr->next;
            }

            temp = temp->next;
        }

        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna