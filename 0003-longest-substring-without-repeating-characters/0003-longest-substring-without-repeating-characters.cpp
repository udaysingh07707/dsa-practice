class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(s.length()<=1) return 1;
        int i = 0;
        int size = 1;
        int j = 1;
        while(j<n){
            char ch = s[j];
            int k = i;
            while(k<j){
                if(s[k] == ch){
                    size = max(size,j-i);
                    i = k+1;
                }
                k++;
            }
            j++;
        }
        size = max(size,j-i);
        return size;
    }
};