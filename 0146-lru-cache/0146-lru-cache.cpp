class LRUCache {
public:
    class Node{
    public:

        Node* next;
        Node* prev;
        int key , val;

        Node(int x , int y){
            key = x;
            val = y;
        }

    };

    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    int cap;
    unordered_map<int,Node*> mp;


    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void addNode(Node* newe){
        Node* temp = head->next;
        head->next = newe;
        newe->next = temp;
        temp->prev = newe;
        newe->prev = head;
    }

    void deletenode(Node* delnode){
        Node* prevv = delnode->prev;
        Node* nextt = delnode->next;

        prevv->next = nextt;
        nextt->prev = prevv;
    }

    int get(int key) {
        if(mp.count(key)){
            Node* node = mp[key];
            int res = node->val;
            deletenode(node);
            addNode(node);
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.count(key)){
            Node* node = mp[key];
            deletenode(node);
        }
        else{
            if(mp.size() == cap){
                mp.erase(tail->prev->key);
                deletenode(tail->prev);
            }
        }

        Node* newe = new Node(key,value);
        addNode(newe);
        mp[key] = newe;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna