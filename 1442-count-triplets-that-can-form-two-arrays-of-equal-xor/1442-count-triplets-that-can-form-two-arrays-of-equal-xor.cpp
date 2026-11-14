class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] ^ arr[i];
        }
        int i = 0;
        int j = 1;
        int count = 0;
        while (i < n - 1) {
            int j = i+1;
            while (j < n) {
            int k = j;

                while (k < n) {
                    int xor1 = prefix[j] ^ prefix[i];
                    int xor2 = prefix[k + 1] ^ prefix[j];
                    if (xor1 == xor2)
                        count++;
                    k++;
                }
                j++;
            }
            i++;
        }
        return count;
    }
};