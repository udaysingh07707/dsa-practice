class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int count = 0;
        int mx = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count++;
            }
            if(i>=k-1){
                mx = max(count,mx);
                int out = i-k+1;
                if(s[out] == 'a' || s[out] == 'e' || s[out] == 'i' || s[out] == 'o' || s[out] == 'u'){
                count--;
                } 
            }   
        }
        return mx;
    }
};