class Queue {
public:
    stack <int> s1, s2;
    
    // Restore s1
    void restore() {
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    // Push element x to the back of queue.
    void push(int x) {
        s1.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop(); // actually remove element
        restore();
    }

    // Get the front element.
    int peek(void) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        int top = s2.top();
        restore();
        return top;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        if (s1.empty())
            return true;
        return false;
    }
};