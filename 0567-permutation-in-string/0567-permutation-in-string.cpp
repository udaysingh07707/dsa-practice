class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int ws = s1.length();
        int freq1[26] = {};
        int freq2[26] = {};
        for(int i = 0;i<s1.length();i++){
            freq1[s1[i] - 'a']++;
        }
        int i = 0;
        for(int j = 0;j<s2.length();j++){
           freq2[s2[j] - 'a']++;
           if(j>=ws){
            freq2[s2[i] - 'a']--;
            i++;
           }

        bool same = true;
        for(int i = 0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                same = false;
                break;
            }
        }
        if(same) return true;
        }
        return false;
       
    }
};