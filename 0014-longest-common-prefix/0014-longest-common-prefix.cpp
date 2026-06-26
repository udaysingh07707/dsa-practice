class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string s = "";
        sort(strs.begin(),strs.end());
        string f = strs[0];
        string l = strs[n-1];
        for(int i = 0;i<min(f.size(),l.size());i++){
            if(f[i] == l[i]){
                s += f[i];
            }else{
                break;
            }
        }
        return s;

    }
};