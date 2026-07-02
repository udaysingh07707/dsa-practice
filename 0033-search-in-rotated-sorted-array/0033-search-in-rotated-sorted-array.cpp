class Solution {
public:
    int search(vector<int>& arr, int target) {
        int lo = 0;
        int hi = arr.size()-1;
        int idx = -1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] == target){
                idx = mid;
                break;
            }
            else if(arr[mid] >= arr[lo]){
                // left half sorted 
                if(target >= arr[lo] && target < arr[mid]){
                    hi = mid-1;
                }else{
                    lo = mid+1;
                }
            }else{
                //right half sorted
                if( target > arr[mid] && target <= arr[hi]){
                    lo = mid+1;
                }else{
                  hi = mid-1;
                }

            }
        }
            return idx;
    }
};