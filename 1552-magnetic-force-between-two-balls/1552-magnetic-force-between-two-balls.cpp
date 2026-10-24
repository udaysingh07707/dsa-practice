class Solution {
public:
    bool helper(vector<int>& position, int m,int mid){
        int count = m-1;
        int prevball = position[0];
        int n = position.size();
        for(int i = 1;i<n;i++){
            if((position[i] - prevball) >= mid){
                count--;
                prevball = position[i];
            }
            if(count == 0) return true;
        }
        return false;

    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int mx = INT_MIN;
        int mn = INT_MAX;

        for(int i = 0;i<n;i++){
            mx = max(mx,position[i]);
            mn = min(mn,position[i]);
        }
        int l = 1;
        int h = mx - mn;
        int ans;
        while(l<=h){
            int mid = l + (h-l)/2;
            bool chk = helper(position,m,mid);

            if(chk){
                ans = mid;
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        return ans;

    }
};