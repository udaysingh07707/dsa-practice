class Solution {
public:
    string formString(string &s,int &i){
       string ans = "";
       while(i < s.size()){
        if(s[i] == ']' ){
            i++;
            return ans;
        }
        else if(isdigit(s[i])){
            int k  = 0;
            while(i<s.size() && isdigit(s[i])){
                k = k*10 + (s[i]-'0');
                i++;
            }
            i++;
            string str = formString(s,i);
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

       return formString(s,i);
        
        
    }
};