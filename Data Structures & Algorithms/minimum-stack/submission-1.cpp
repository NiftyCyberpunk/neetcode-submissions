class MinStack {
private:
    stack<int> minstack;
    stack<int> min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        minstack.push(val);
        if(min.empty()){
            min.push(val);
        }
        else{
            if(val <= min.top()){
                min.push(val);
            }
        }
    }
    
    void pop() {
        int num = minstack.top();
        minstack.pop();
        if(num == min.top())min.pop();
    }
    
    int top() {
        return minstack.top();
    }
    
    int getMin() {
        return min.top();
    }
};
