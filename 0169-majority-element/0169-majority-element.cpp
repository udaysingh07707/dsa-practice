class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        if(n==1){
            return arr[0];
        }
        sort(arr.begin(),arr.end());
        int count = 1;
        for(int i = 1;i<n;i++){
            if(arr[i] == arr[i-1]){
                count++;
                if(count > n/2){
                    return arr[i];
                }
            }else{
                count = 1;
            }
        }
        return -1;
    }
};