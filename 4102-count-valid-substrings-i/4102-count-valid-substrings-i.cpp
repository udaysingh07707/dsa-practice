class Solution {
public:
    long long countValidSubstrings(string s) {
        long long count = 0;
        int n = s.length();
       
        long long idx = -1;
        for(int i = 0;i<n;i++){
            if(i>=2 && s[i] == 'c' && s[i-1] == 'b' && s[i-2] == 'a' ){
                idx = i-2;
            }
            count += i - idx;
        }
        return count;
       
    }
};