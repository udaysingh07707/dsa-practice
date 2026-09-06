class Solution {
public:
  
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
          string ans = "";

    while (!st.empty()) {
        ans = "/" + st.top() + ans;
        st.pop();
    }

    return ans.empty() ? "/" : ans;
    }
};