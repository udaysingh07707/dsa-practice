class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int lmax = 0;
        int rmax = 0;
        int water = 0;
        while(l<r){
            if(height[l]<height[r]){
                if(height[l]>lmax) lmax = height[l];
                water += lmax - height[l];
                l++;
            }else{
                if(height[r]>rmax) rmax = height[r];
                water += rmax - height[r];
                r--;
            }
        }
        return water;


    }
};