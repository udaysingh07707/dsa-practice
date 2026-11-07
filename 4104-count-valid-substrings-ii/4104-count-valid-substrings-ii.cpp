class Solution {
public:
    long long countValidSubstrings(string s) {
        long long count  = 0;
        int la = -1;
        int lb = -1;
        int idx = -1;
        for(int i = 0;i<s.size();i++){
            if(s[i] == 'a') la = i;
            if(la != -1 && s[i] == 'b') lb = la;
            if(s[i] == 'c' && lb!=-1) idx = max(idx,lb);
            count += i - idx;
        }
        return count;
    }
};