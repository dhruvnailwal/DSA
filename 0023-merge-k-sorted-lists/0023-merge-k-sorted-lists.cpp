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
    ListNode* merge(ListNode* l1 , ListNode* l2){

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        ListNode* t1 = l1;
        ListNode* t2 = l2;

        while(t1 && t2){
            if(t1->val < t2->val){
                temp->next = t1;
                t1 = t1->next;
            }
            else{
                temp->next = t2;
                t2 = t2->next;
            }

            temp = temp->next;
        }

        while(t1){
            temp->next = t1;
            t1 = t1->next;
            temp = temp->next;
        }

        while(t2){
            temp->next = t2;
            t2 = t2->next;
            temp = temp->next;
        }

        return dummy->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();

        if(n == 0) return NULL;

        if(n == 1) return lists[0];

        ListNode* merged = merge(lists[0], lists[1]);

        for (int i = 2; i < n; i++) {
            merged = merge(merged, lists[i]);
        }

        return merged;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna