class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int csum = 0;
        int  i = 0;
        int maxcsum = 0;
        int n = customers.size();
        int total = 0;
        for(int j = 0 ; j<n ;j++){
            if(grumpy[j] == 1){
                csum += customers[j];  
            }
            if(j >= minutes-1){
                if(csum>maxcsum){
                    maxcsum = csum;
                }

                if(grumpy[i] == 1){
                csum -= customers[i];  
                }
                i++;
            }
        }
        // for(int i = idx ; i<idx+minutes;i++){
        //     if(grumpy[i] == 1) grumpy[i] = 0;
        // }
        
        for(int i =0;i<n;i++){
            if(grumpy[i] == 0){
                total += customers[i];
            }
        }
        return total+maxcsum;
    }
};