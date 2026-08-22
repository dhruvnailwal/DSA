class MyCircularQueue {
public:
    vector<int> arr;
    int front , rear , sizee;

    MyCircularQueue(int k) {
        arr.resize(k);
        front = -1;
        rear = -1;    
        sizee = k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        else if(front == -1){
            rear++;
            arr[rear] = value;
            front++;
        }
        else{
            rear++;
            rear %= sizee;
            arr[rear] = value;
        }

        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        else if(front == rear) {
            front = -1;
            rear = -1;
        }
        else{
            front++;
            front %= sizee;
        }

        return true;
    }
    
    int Front() {
        if(front == -1) return -1;
        else return arr[front];
    }
    
    int Rear() {
        if(rear == -1) return -1;
        else return arr[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return front == (rear + 1 )% sizee;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna