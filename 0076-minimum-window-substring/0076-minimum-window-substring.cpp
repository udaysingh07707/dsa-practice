class Solution {
public:
    string minWindow(string s, string t) {
        int arr[128] = {0};
        int n = s.length();
        int i = 0;
        int j = 0;
        int count = t.length();
        int start = 0;
        int end = 0;
        int minlen = INT_MAX;
        for(char ch : t){
            arr[ch]++;
        }
        while(j<n){
            if(arr[s[j]] > 0){
                count--;
            }
            arr[s[j]]--;
            while(count == 0){
                if(j-i+1 < minlen){
                start  = i;
                end = j-i+1;
                minlen = min(minlen,j-i+1);
                }
                arr[s[i]]++;
                if(arr[s[i]] > 0){
                    count++;
                }
                i++;

            }
            j++;
           
        }
        return minlen == INT_MAX?"":s.substr(start,minlen);
    }
};