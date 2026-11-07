class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = 0;
        while (j < n) {
            if(arr[j] == 0){
                j++;
            }else  if (arr[i] == 0) {
                swap(arr[i], arr[j]);
                i++;
                j++;

            }  else{
                j++;
                i++;
            }
        }
    }
};