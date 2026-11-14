class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> v(n,0);
        if(k ==0){
            return v;
        }else if(k > 0){
            int i = 1;
            int sum = 0;
            int j = 1;
            for(int l = 0;l<k;l++){
                sum += code[j];
                j = (j+1)%n;
            }
            for(int m = 0;m<n;m++){
                v[m] = sum;
                sum -= code[i];
                sum += code[j];
                i = (i+1)%n;
                j = (j+1)%n;
            }
            return v;
        }else{
            int i = 0;
            int j = 0;
            int sum = 0;
            for(int l = 0;l<abs(k);l++){
                i = (i-1+n)%n;
                sum += code[i];
            }
            for(int m = 0;m<n;m++){
                v[m] = sum;
                sum -= code[i];
                i = (i+1)%n;
                sum += code[j];
                j = (j+1)%n;
            }
            return v;
        }
    }
};