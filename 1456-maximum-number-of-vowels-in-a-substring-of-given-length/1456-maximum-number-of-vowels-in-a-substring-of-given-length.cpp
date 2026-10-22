class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int count = 0;
        int mx = 0;
        for(int i = 0;i<n;i++){
            if(string("aeiou").find(s[i]) != string::npos){
                count++;
            }
            if(i>=k-1){
                mx = max(count,mx);
                int out = i-k+1;
                if(string("aeiou").find(s[out]) != string::npos){
                count--;
                } 
            }   
        }
        return mx;
    }
};