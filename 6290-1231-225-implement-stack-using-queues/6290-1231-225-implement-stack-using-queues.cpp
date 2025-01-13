class MyStack {
public:
    MyStack() {
    }
    vector<int> mystack;
    void push(int x) {
        mystack.push_back(x);
    }
    
    int pop() {
        int x = mystack.back();
        mystack.pop_back();
        return x;
    }
    
    int top() {
        return mystack.back();
    }
    
    bool empty() {
        return mystack.empty();
    };
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */