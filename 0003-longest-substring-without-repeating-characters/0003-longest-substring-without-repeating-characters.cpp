class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0;
        int j = 0;
        unordered_map<char,int> mp;
        int len = 0;
        while(j<n){

           if(mp[s[j]] <= 0){
            mp[s[j]]++;
            j++;
           }else{
            while(mp[s[j]] != 0){
                mp[s[i]]--;
                i++;
            }
           }
           len = max(len,j-i);
        }
        return len;
    }
};