class MinStack {
private:
    stack<int> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> temp;
        int ans = st.top();
        while(!st.empty()){
            ans = min(ans, st.top());
            temp.push(st.top());   
            st.pop();
        }
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return ans;
    }
};
