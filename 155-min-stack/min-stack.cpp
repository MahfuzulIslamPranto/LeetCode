class MinStack {
public:
    MinStack() {
        
    }
    stack<int> st;
    stack<int> newSt;
    void push(int val) {
        st.push(val);
        if(newSt.empty())
            newSt.push(st.top());
        else if(st.top()<=newSt.top())
            newSt.push(st.top());
    }
    
    void pop() {
        int val;
        if(!st.empty())
            val = st.top();
            st.pop();
            if(val==newSt.top())
                newSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return newSt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */