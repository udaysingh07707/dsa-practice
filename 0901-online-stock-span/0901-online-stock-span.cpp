class StockSpanner {
public:
    stack<pair<int,int>> st;
    int idx = -1;
    StockSpanner() { 
    }
    
    int next(int price) {
        idx++;
        if(idx == 0){
         st.push({price,idx}); 
         return 1;
        }else{
            while(st.size() > 0 && st.top().first <= price){
                st.pop();
            }
            int span;
            if(st.empty()){
                span =  idx+1;
            }else{
                span =  idx - st.top().second; 
            }
            st.push({price,idx});
            return span;
        }

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */