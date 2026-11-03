class Solution {
public:
    bool isPrefixAndSuffix(string str1,string str2){
        int i = 0;
        int j = 0;

        int n = str1.length();
        int m = str2.length();
        if(m<n) return false;
        while(i<n){
            if(str1[i]!=str2[i] || str1[i]!=str2[m-n+i]) return false;
            i++;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0;i<words.size()-1;i++){
            for(int j = i+1;j<words.size();j++){
                if(isPrefixAndSuffix(words[i],words[j])) count++;
            }
        }
        return count;
    }
};