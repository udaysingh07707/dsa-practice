class Solution {
public:
    string arit(string val1,string val2,string ex){
        if(ex == "+") return to_string(stoi(val1) + stoi(val2));
        if(ex == "-") return to_string(stoi(val1) - stoi(val2));
        if(ex == "*") return to_string(stoi(val1) * stoi(val2));
        if(ex == "/") return to_string(stoi(val1) / stoi(val2));
        return "";
    }
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        int n = tokens.size();
        for(int i = 0;i<n;i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                string val2 = st.top();
                st.pop();
                string val1 = st.top();
                st.pop();
                string ans = arit(val1,val2,tokens[i]);
                st.push(ans);
            }else{
            st.push(tokens[i]);

            }
        }
        return stoi(st.top());
    }
};