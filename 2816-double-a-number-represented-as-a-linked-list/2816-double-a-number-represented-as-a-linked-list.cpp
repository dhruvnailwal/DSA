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
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* nextt = NULL;
        ListNode* prev = NULL;

        while(temp){
            nextt = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextt;
        }

        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* t1 = reverse(head);
        ListNode* dummy = new ListNode(-1);
        ListNode* t2 = dummy;

        int carry = 0;

        while(t1 || carry){
            int sum = carry;

            if(t1){
                sum += t1->val * 2;
                t1 = t1->next;
            }

            carry = sum/10;

            t2->next = new ListNode(sum % 10);

            t2 = t2->next;
        }
        
        return reverse(dummy->next);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna