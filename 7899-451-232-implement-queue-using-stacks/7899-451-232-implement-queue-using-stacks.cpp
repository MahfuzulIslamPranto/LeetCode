class MyQueue {
public:
    MyQueue() {
        
    }
    list<int> st;
    void push(int x) {
        st.push_back(x);
    }
    
    int pop() {
        int x = st.front();
        st.pop_front();
        return x;
    }
    
    int peek() {
        return st.front();
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */