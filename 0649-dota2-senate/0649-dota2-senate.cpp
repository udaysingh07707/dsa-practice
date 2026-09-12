class Solution {
public:
    string predictPartyVictory(string senate) {
        int n  = senate.length();
        queue<int>  r;
        queue<int> d;
        for(int i = 0 ;i<senate.length();i++){
            if(senate[i] == 'R'){
                r.push(i);
            }else{
                d.push(i);
            }
        }
        while(r.size()> 0 && d.size()>0){
            if(r.front() < d.front()){
                d.pop();
                r.push(r.front() + n);
                r.pop();
            }else{
                r.pop();
                d.push(d.front() + n);
                d.pop();
            }
        }
        if(r.empty()){
            return "Dire";
        }else{
            return "Radiant";
        }
    }

};