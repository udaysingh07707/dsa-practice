class Solution {
public:
    bool judgeSquareSum(int c) {
        // for(int i=1;i<=c;i++){
        //     for(int j = 1;j<=c;j++){
        //         if(i*i + j*j == c ){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        long long i = 0;
        long long j = sqrt(c);
        while(i<=j){
            long long x = i*i + j*j;
        if(x == c  ){
            return true;
        }else if(x > c){
            j--;
        }else{
            i++;
        }
        }
        return false;

    }
};