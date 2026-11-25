class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
     int n = arr.size();
      vector<int> pse(n); 
      vector<int> nse(n);
      stack<int> st;  
      int MOD = 1e9+7;
      long long count = 0;
      for(int i = 0;i<n;i++){
        while(!st.empty() && arr[i] <= arr[st.top()] ){
            st.pop();
        }
        if(st.empty()) pse[i] = -1;
        else pse[i] = st.top();
        st.push(i);
      }
      while (!st.empty())
            st.pop();
      for(int i = n-1;i>=0;i--){
        while(!st.empty() && arr[i] < arr[st.top()] ){
            st.pop();
        }
        if(st.empty()) nse[i] = n;
        else nse[i] = st.top();
        st.push(i);
      }
      
      for(int i = 0;i<n;i++){
        int s = i - pse[i];
        int e = nse[i] - i;
       count = (count + 1LL*arr[i]*s*e)%MOD;
      }
      return count;



    }
};