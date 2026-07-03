class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        vector<int> v;
        if(arr.size() == k){
            return arr; 
        }
        int n = arr.size();
        int lo = 0;
        int hi = n-k;
        while(lo < hi){
            int mid = lo + (hi-lo)/2;
            if(x - arr[mid]  >  arr[mid+k] - x){
                lo = mid + 1;
            }else{
                hi = mid;
            }
        }
        for(int i = 0;i<k;i++){
            v.push_back(arr[lo++]);
        }
        return v;

    }
};