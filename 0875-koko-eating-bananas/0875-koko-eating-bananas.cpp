class Solution {
public:
    long long chk(vector<int> piles,int h){
        long long k = 0;
        for(int i = 0;i<piles.size();i++){
            k = k + (piles[i] + h - 1)/h;
        }
        return k;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int mx = INT_MIN;
        for(int i = 0;i<n;i++){
            mx = max(mx,piles[i]);
        }
        int lo = 1;
        int hi = mx;
        int ans = mx;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            long long val = chk(piles,mid);
           if(val <= h){
               ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
       return ans;
    }
};