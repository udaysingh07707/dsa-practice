class Solution {
public:
    bool isPalindrome(int x) {
     long long r = 0;
     int k = x;
     if(k<0){
        return false;
     }
     while(k!=0){
        int rem =  k%10;
         r = r*10+rem;
         k = k/10;
     }
     if(x==r){
      return true;
     }else{
     return false;
     }
    }
};