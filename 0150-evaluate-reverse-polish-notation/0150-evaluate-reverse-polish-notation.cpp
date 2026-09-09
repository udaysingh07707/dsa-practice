class Solution {
public:
    int solve(int val1,int val2,string ch){
        if(ch == "+") return val1+val2;
        if(ch == "-") return val1-val2;
        if(ch == "*") return val1*val2;
         return val1/val2;

    }
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<string> st;
        for(int i = 0;i<n;i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int val2 = stoi(st.top());
                st.pop();
                int val1 = stoi(st.top());
                st.pop();
                int val = solve(val1,val2,tokens[i]);
                st.push(to_string(val));
            }else{
                st.push(tokens[i]);
            }
        }
        return stoi(st.top());
    }
};