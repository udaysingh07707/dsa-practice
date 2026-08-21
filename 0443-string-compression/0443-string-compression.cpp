class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n==1) return 1;
        int read = 0 ;
        int write = 0;
        int cnt;
        while(read < n){
            int start = read;
            while(read+1<n && chars[read] == chars[read+1]){
                read++;
            }
            cnt = read - start + 1;
            chars[write] = chars[start];
            write++;
            if(cnt>1){
                string s = to_string(cnt);
                for(char ch : s){
                    chars[write] = ch;
                    write++;
                }
            }
            read++;

        }
        return write;

        
        
    }
};