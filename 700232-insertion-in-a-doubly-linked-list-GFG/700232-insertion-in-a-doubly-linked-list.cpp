/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertAtPos(Node* head, int p, int x) {
        // code here
        Node* newe = new Node(x);
        int count = 0;
        
        Node* temp = head;
        
        while(temp && count < p){
            count++;
            temp = temp->next;
        }
        
        if(temp->next == NULL){
            temp->next = newe;
            newe->prev = temp;
        }
        
        else{
            temp->next->prev = newe;
            newe->next = temp->next;
            temp->next = newe;
            newe->prev = temp;
        }
        
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna