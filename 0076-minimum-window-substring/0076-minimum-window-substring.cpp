class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        unordered_map<char, int> window;
        int formed = 0;
        for (char ch : t) {
            mp[ch]++;
        }
        int i = 0;
        int j = 0;
        int n = s.length();
        int len = INT_MAX;
        int start;
        int end;
        while (j < n) {
            window[s[j]]++;
            if (mp.find(s[j]) != mp.end()) {
                if (mp[s[j]] == window[s[j]]) {
                   formed++;
                }
            }
            while (formed == mp.size()) {
                
                 end = j;
                 if(j-i+1 < len) start = i;
                len = min(len,j-i+1);

                if (mp.find(s[i]) != mp.end()) {
                    if (mp[s[i]] == window[s[i]]) {
                        formed--;
                        
                    }
                }
                window[s[i]]--;
                i++;
            }
            j++;
        }
       return  len == INT_MAX?"":s.substr(start,len);
    }
};