class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp = "";
        vector<string> v;
        string ans = "";
        while(ss>>temp){
            v.push_back(temp);
        }
        for(int i = v.size()-1;i>=0;i--){
            ans += v[i];
            if(i!=0){
                ans += " ";
            }
        }
        return ans;
    }
};