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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* temp = list1;
        int count = 0;

        while(temp){
            count++;
            temp = temp->next;
        }

        temp = list1;

        if(b == count - 1){
            int t = 0;
            while(t < a - 1){
                t++;
                temp = temp->next;
            }
            temp->next = list2;

            return list1;
        }

        else{
            int t = 0;

            while(t < a - 1){
                t++;
                temp = temp->next;
            }

            ListNode* t1 = temp;

            while(t < b){
                t++;
                temp = temp->next;
            }
            
            ListNode* t2 = temp;

            t1->next = list2;

            ListNode* t3 = list2;

            while(t3->next){
                t3 = t3->next;
            }

            t3->next = t2->next;
        }

        return list1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna