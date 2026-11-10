class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int n  = fruits.size();
        int i = 0;
        int j = 0;
        int len = INT_MIN;
        while(j<n){
            mp[fruits[j]]++;
            bool  flag = false;;
            while(mp.size() > 2){
                mp[fruits[i]]--;
                if(mp[fruits[i]] == 0){
                    mp.erase(fruits[i]);
                    flag = true;
                }
                if(flag){
                    i++;
                    break;
                }
                i++;
            }
            len = max(len,j-i+1);
            j++;
        }
        return len == INT_MIN?0:len;
    }
};