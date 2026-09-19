class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> map;
        int n = fruits.size();
        int i = 0;
        int j = 0;
        int size = 0;
        while(j<n){
          
                map[fruits[j]]++;
                j++;
          
            while(map.size()>2){
                map[fruits[i]]--;
                if(map[fruits[i]] == 0){
                    map.erase(fruits[i]);
                }
                i++;
            }
            size = max(size,j-i);

        }
        
        return size;

    }
};