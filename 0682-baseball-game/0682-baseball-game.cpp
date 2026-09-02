class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;
        for(string op : operations){
            if(op == "D" ){
                st.push(st.top()*2);
            }else if(op == "C"){
                st.pop();
            }else if(op == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int x = a+b;
                st.push(b);
                st.push(a);
                st.push(x);
            }else{
                int x = stoi(op);
                st.push(x);
            }
        }
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;

    }
};