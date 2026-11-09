class Solution {
public:
    bool skip(int i, int j,string s) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int count = 0;
        int i = 0;
        int j = s.length()-1;
        while (i < j) {
            if (s[i] != s[j]) {
                return skip(i + 1, j,s) || skip(i, j - 1,s);
            } else {
                i++;
                j--;
            }
        }
            return true;
    }
};