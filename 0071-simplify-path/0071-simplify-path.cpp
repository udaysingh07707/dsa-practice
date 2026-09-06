class Solution {
public:
   void  insertatbottom(string x,stack<string>& st){
     if(st.empty()){
        st.push(x);
        return;
     }
     string l = st.top();
     st.pop();
     insertatbottom(x,st);
     st.push(l);
   }
    void rev(stack<string>& st){
        if(st.empty()) return;
        string x = st.top();
        st.pop();
        rev(st);
        insertatbottom(x,st);
    }

    string simplifyPath(string path) {
       stack<string> st;
       int n = path.length();
        int i = 0;
        string s = "/";
        while(i<path.length()){
            if(path[i] == '/'){
                i++;
                continue;
            }

            string part = "";
            while(i<n && path[i]!='/'){
                part += path[i];
                i++;
            }

            if(part == ".."){
                if(st.size()>0){
                    st.pop();
                }
            }else if(part == "."){
            }else{
                st.push(part);
            }
        }
        rev(st);
        while(!st.empty()){
            s = s+st.top();
            if(st.size() != 1){
                s += '/';
                st.pop();
            }else{
                st.pop();
            }
        }
        return s;
    }
};