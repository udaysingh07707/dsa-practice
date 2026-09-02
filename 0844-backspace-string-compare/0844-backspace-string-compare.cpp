class Solution {
public:
    bool backspaceCompare(string s, string t) {
       int i = s.length()-1;
       int j = t.length()-1;
       int skip1 = 0;
       int skip2 = 0;
       while(i>=0 || j>=0){
           while(i>=0){
            if(s[i] == '#'){
                skip1++;
                i--;
            }else if(skip1>0){
                skip1--;
                i--;
            }else{
                break;
            }
           }
           
            while(j>=0){
            if(t[j] == '#'){
                skip2++;
                j--;
            }else if(skip2>0){
                skip2--;
                j--;
            }else{
                break;
            }
           }
            if(i>=0 && j>=0 && s[i] != t[j]){
                return false;
            }
           if((i<0 && j>=0) || (i>=0 && j<0)) return false;
            i--;
            j--;
       }
       return true;

    }
};