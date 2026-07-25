class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        vector<int> pre(n+1);
        vector<int> suf(n+1);
        pre[0] = 0;
        for(int i = 1;i<=n;i++){
            pre[i] = pre[i-1];
            if(customers[i-1] == 'N'){
                pre[i]++;
            }
        }
        suf[n] = 0;
        for(int i = n-1;i>=0;i--){
            suf[i] = suf[i+1];
            if(customers[i] == 'Y'){
                suf[i]++;
            }
        }
        
        int mn = suf[0]+pre[0];
        int hour = 0;
        for(int i = 1 ;i<=n;i++){
            int pen = suf[i] + pre[i];
            if(pen < mn){
                mn = pen;
                hour = i;
            }
        }
        return hour;
    }
};