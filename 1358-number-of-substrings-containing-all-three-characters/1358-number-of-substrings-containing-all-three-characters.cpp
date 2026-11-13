class Solution {
public:
    int numberOfSubstrings(string s) {
       int i = 0;
       int j = 0;
       int n = s.length();
       int arr[3] = {0};
       int count = 0;
       while(j<n){
            arr[s[j] - 'a']++;
            while(arr[0] && arr[1] && arr[2]){
                count += n-j;
                arr[s[i] - 'a']--;
                i++;
            }
            j++;
       } 
       return count;
    }
};