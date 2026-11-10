class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int i = 0;
        int j = 0;
        int n = s.length();
        int len = INT_MIN;
        while (j < n) {
            if(mp[s[j]] > 0){
                while(mp[s[j]] != 0){
                    mp[s[i]]--;
                    i++;
                }
            }
            mp[s[j]]++;
            len = max(len,j-i+1);
            j++;
        }
        return len == INT_MIN?0:len;
    }
};