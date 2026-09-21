class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(int i = 0; i < tokens.size(); i++){
            string ch = tokens[i];
            if(ch == "+" || ch == "-" || ch == "*" || ch == "/"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                if(ch == "+"){
                    int ans = num2 + num1;
                    st.push(ans);
                }
                if(ch == "-"){
                    int ans = num2 - num1;
                    st.push(ans);
                }
                if(ch == "*"){
                    int ans = num2 * num1;
                    st.push(ans);
                }
                if(ch == "/"){
                    int ans = num2 / num1;
                    st.push(ans);
                }
            }
            else{
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};
