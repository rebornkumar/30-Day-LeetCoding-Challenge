class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>stk;
    map<int,int>hash;
    
    MinStack() {
        
    }
    
    void push(int x) {
        stk.push(x);
        if(hash.find(x) == hash.end()) {
            hash[x] = 1;
        }
        else {
            hash[x]++;
        }
    }
    
    void pop() {
        if(stk.empty() == false) {
            int element = stk.top();
            hash[element]--;
            if(hash[element] == 0) {
                hash.erase(element);
            }
            stk.pop();
        }
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return hash.begin()->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */