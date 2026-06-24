class Solution {
public:
    int mySqrt(int x) {
        int low = 0,high = x;
        long long mid;
        int e;
        if(x==0 ||x==1) return x;
        while(low<=high){
            mid = (low+high)/2;
            if(mid*mid == x){
                e = mid;
                break;
            }else if(mid*mid > x){
                high = mid-1;
            }else{
                low = mid+1;
                e = mid;
            }
        }
        return e;
    }
};