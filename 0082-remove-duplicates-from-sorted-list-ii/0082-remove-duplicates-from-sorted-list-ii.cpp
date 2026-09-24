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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;

        ListNode* dummy = new ListNode(-1);
        ListNode* help = dummy;

        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp->next){

            if(temp == head && temp->val != temp->next->val){
                help->next = new ListNode(temp->val);
                help = help->next;
            }

            else if(temp->val != temp->next->val && temp->val != prev->val){
                help->next = new ListNode(temp->val);
                help = help->next;
            }

            prev = temp;
            temp = temp->next;

        }

        cout<<prev->val<<" ";
        cout<<temp->val<<" ";

        if(prev->val != temp->val){
            help->next = new ListNode(temp->val);
            temp = temp->next;
        }

        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna