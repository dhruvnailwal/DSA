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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* a = NULL ;
        ListNode* b = NULL ;

        ListNode* temp = head;
        int count = 0;

        while (temp) {
            count++;

            if (count == k)
                a = temp;

            temp = temp->next;
        }

        temp = head;
        k = count - k + 1;
        count = 0;

        while (temp) {
            count++;

            if (count == k) {
                b = temp;
                break;
            }

            temp = temp->next;
        }

        swap(a->val,b->val);

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna