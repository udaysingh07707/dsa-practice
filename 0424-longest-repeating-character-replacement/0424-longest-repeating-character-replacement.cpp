class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int j = 0;
        int n = s.length();
        unordered_map<char,int> mp;
        int maxfreq = 0;
        int len = INT_MIN;
        while (j < n) {
            mp[s[j]]++;
            maxfreq = max(maxfreq,mp[s[j]]);
            if(j-i+1 - maxfreq > k){
                mp[s[i]]--;
                i++;
            }
            len = max(len,j-i+1);
            j++;
        }
        return len;
    }
};