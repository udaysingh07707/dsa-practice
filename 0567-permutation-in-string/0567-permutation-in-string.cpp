class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len = s1.length();
        int n = s2.length();
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i = 0;i<len;i++){
            mp1[s1[i]]++;
        }
        int i = 0;
        int j = 0;
        while(j<n){
            mp2[s2[j]]++;
            if(j>=len-1){
                if(mp1 == mp2) return true;
                mp2[s2[i]]--;
                if(mp2[s2[i]] == 0) mp2.erase(s2[i]);
                i++;
            }
            j++;
        }
        return false;
    }
};