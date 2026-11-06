class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        if(n1!=n2) return false;
        // int ch[26] = {0};
        // for(int i = 0;i<n1;i++){
        //     ch[s[i] - 'a']++;
        //     ch[t[i] - 'a' ]--;
        // }
        // for(int i = 0;i<26;i++){
        //     if(ch[i]!=0) return false;
        // }
        // return true;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i = 0;i<s.length();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        if(mp1 == mp2) return true;
        return false;
    }
};