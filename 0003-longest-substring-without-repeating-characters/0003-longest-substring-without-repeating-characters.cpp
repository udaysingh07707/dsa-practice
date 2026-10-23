class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;
        int arr[127] = {0};
        int i = 0;
        int j = 0;
        int n = s.length();
        int l = INT_MIN;
        while(j<n){
            int idx = s[j];
             arr[idx]++;
            while(arr[idx]!=1){
                arr[s[i]]--;
                i++;
            }
            l = max(l,j-i+1);
            j++;
        }
           return l;
    }
};