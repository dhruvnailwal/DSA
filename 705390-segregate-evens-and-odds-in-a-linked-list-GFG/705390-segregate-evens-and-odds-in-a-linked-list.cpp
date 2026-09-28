/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
}; */
class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        if(head == NULL) return head;
        
        Node* oddhead = NULL;
        Node* oddtail = NULL;
        
        Node* evenhead = NULL;
        Node* eventail = NULL;

        Node* temp = head;

        
        while(temp){
            Node* nextt = temp->next;
            temp->next = NULL;
            
            if(temp->data % 2 == 0){
                if(evenhead == NULL){
                    evenhead = eventail = temp;
                }
                else{
                    eventail->next = temp;
                    eventail = temp;
                }
            }
            else{
                if(oddhead == NULL){
                    oddhead = oddtail = temp;
                }
                else{
                    oddtail->next = temp;
                    oddtail = temp;
                }
            }
            
            temp = nextt;
        }
        
        if (evenhead == NULL ) return oddhead;
        
        if (oddhead) eventail->next = oddhead;
        
        return evenhead;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna