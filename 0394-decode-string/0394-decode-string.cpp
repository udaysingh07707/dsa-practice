class Solution {
public:
    string formstring(int& i, string s) {
        string ans = "";
        while (i < s.length()) {
            int k = 0;
            if(s[i] == ']'){
                i++;
                return ans;
            }
            else if (isdigit(s[i])) {
                while (i < s.length() && isdigit(s[i])) {
                    k = k * 10 + (s[i] - '0');
                    i++;
                }
                i++;
                string str = formstring(i,s);
                for(int i = 0;i<k;i++){
                    ans += str;
                }

            }else{
                ans += s[i];
                i++;
            }
        }
        return ans;
    }
    string decodeString(string s) {

        int i = 0;
        return formstring(i, s);
    }
};