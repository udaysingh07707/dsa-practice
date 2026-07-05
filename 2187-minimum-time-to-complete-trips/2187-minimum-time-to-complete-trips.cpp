class Solution {
public:
    long long chk(long long mid,vector<int>& time, int totalTrips){
        long long sum = 0;
        for(int i = 0;i<time.size();i++){
            sum += mid/time[i];
        }
        return sum;

    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long lo = 0;
        long long hi = (long long)(*min_element(time.begin(),time.end())) * totalTrips;
        long long ans = hi;
        while(lo<=hi){
            long long mid = lo + (hi-lo)/2;
            if(chk(mid,time,totalTrips) >=  totalTrips ){
                ans  = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return ans;

    }
};