class Solution {
public:
    int trap(vector<int>& height) {
      int n = height.size();
      vector<int> lm(n);
      vector<int> rm(n);
      int water = 0;

      int lmax = height[0];
      for(int i = 0;i<n;i++){
        if(height[i]>lmax) lmax = height[i];
        lm[i] =   lmax;
      }
     
      int rmax = height[n-1];
      for(int i=n-1;i>=0;i--){
        if(height[i]>rmax) rmax = height[i];
        rm[i] = rmax;
      }

      for(int i = 0;i<n;i++){
        water += (min(lm[i],rm[i]) - height[i]);
      }
      
        return water;
        // int l = 0;
        // int r = height.size()-1;
        // int lmax = 0;
        // int rmax = 0;
        // int water = 0;
        // while(l<r){
        //     if(height[l] < height[r]){
        //         lmax = max(lmax,height[l]);
        //         water += lmax - height[l];
        //         l++;
               
        //     }else{
        //        rmax = max(rmax,height[r]);
        //         water += rmax - height[r];
        //         r--; 
        //     }
        // }

        //     return water;



        

    }
};