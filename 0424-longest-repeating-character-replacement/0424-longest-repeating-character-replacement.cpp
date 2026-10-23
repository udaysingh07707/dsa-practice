class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int i = 0;
        int j = 0;
        int arr[26] = {0};
        int l = INT_MIN;
        int maxfre = 0;
        while(j<n){
            arr[s[j] - 'A']++;
            maxfre = max(maxfre,arr[s[j] - 'A']);
            if(j-i+1 - maxfre > k){
                arr[s[i] - 'A']--;
                i++;
            }
            l = max(l,j-i+1);
            j++;
        }
        return l;
    }
};