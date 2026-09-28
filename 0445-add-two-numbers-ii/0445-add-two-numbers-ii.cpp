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
    ListNode* reverse(ListNode* head) {
        if (head == NULL)
            return head;

        ListNode* nextt = NULL;
        ListNode* prev = NULL;

        while (head) {
            nextt = head->next;
            head->next = prev;
            prev = head;
            head = nextt;
        }

        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = reverse(l1);
        ListNode* t2 = reverse(l2);

        ListNode* temp1 = t1;
        ListNode* temp2 = t2;

        int carry = 0;

        ListNode *ans = new ListNode(-1);
        ListNode *dummy = ans;

        while (temp1 || temp2 || carry) {
            int sum = carry;

            if (temp1) {
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if (temp2) {
                sum += temp2->val;
                temp2 = temp2->next; 
            }

            carry = sum/10;

            dummy->next = new ListNode(sum % 10);
            dummy = dummy->next;
        }

        t1 = reverse(ans->next);

        return t1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna