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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        int carry = 0;

        while(carry || t1 || t2){
            int sum = carry;

            if(t1){
                sum += t1->val;
                t1 = t1->next;
            }

            if(t2){
                sum += t2->val;
                t2 = t2->next;
            }

            carry = sum/10;
            sum %= 10;
            
            curr->next = new ListNode(sum);
            curr = curr->next;
        }

        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna