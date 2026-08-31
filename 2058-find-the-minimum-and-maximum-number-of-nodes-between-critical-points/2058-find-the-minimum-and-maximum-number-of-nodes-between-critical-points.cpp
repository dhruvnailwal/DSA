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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next == NULL) return {-1,-1};

        vector<int> ans;

        ListNode* prev = head;
        ListNode* temp = head->next;
        ListNode* nextt = temp->next;

        int first = -1;
        int last = -1;
        int mini = INT_MAX;
        int count =  1;

        while(nextt){

            count++;

            if((temp->val > prev->val && temp->val > nextt->val && first == -1) || (temp->val < prev->val && temp->val < nextt->val && first == -1)){
                first = count;
                last = count;
            }

            else if((temp->val > prev->val && temp->val > nextt->val )|| (temp->val < prev->val && temp->val < nextt->val)){
                if(last == -1){
                    last = count;
                }
                else{
                    mini = min(mini,count-last);
                    last = count;
                }
            }

            prev = temp;
            temp = nextt;
            nextt = temp->next;
        }

        if(mini == INT_MAX) return {-1, -1};

        return {mini, last - first};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna